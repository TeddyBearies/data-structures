#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int frontIndex;
    int rearIndex;
    int count;
    int maxSize;

public:
    Queue(int capacity = 5) {
        maxSize = capacity;
        arr = new int[maxSize];
        frontIndex = 0;
        rearIndex = -1;
        count = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int value) {
        if (count == maxSize) {
            cout << "Queue full!" << endl;
            return;
        }
        rearIndex = (rearIndex + 1) % maxSize;
        arr[rearIndex] = value;
        count++;
    }

    void dequeue() {
        if (count == 0) {
            cout << "Queue empty!" << endl;
            return;
        }
        frontIndex = (frontIndex + 1) % maxSize;
        count--;
    }

    int front() {
        if (count == 0) {
            cout << "Queue empty!" << endl;
            return -1;
        }
        return arr[frontIndex];
    }

    bool empty() {
        return count == 0;
    }

    void print() {
        cout << "Queue: [ ";
        for (int i = 0; i < count; i++) {
            int index = (frontIndex + i) % maxSize;
            cout << arr[index] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    cout << "=== Queue Test ===" << endl;
    Queue q(5);
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.print();
    cout << "Front = " << q.front() << endl;
    q.dequeue();
    q.print();
    cout << "Empty? " << (q.empty() ? "Yes" : "No") << endl;
    return 0;
}
que
