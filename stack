#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int topIndex;
    int maxSize;

public:
    Stack(int capacity = 5) {
        maxSize = capacity;
        arr = new int[maxSize];
        topIndex = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (topIndex == maxSize - 1) {
            cout << "Stack overflow!" << endl;
            return;
        }
        arr[++topIndex] = value;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack underflow!" << endl;
            return;
        }
        topIndex--;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack empty!" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool empty() {
        return topIndex == -1;
    }

    void print() {
        cout << "Stack: [ ";
        for (int i = topIndex; i >= 0; i--)
            cout << arr[i] << " ";
        cout << "]" << endl;
    }
};

int main() {
    cout << "=== Stack Test ===" << endl;
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.print();
    cout << "Top = " << st.top() << endl;
    st.pop();
    st.print();
    cout << "Empty? " << (st.empty() ? "Yes" : "No") << endl;
    return 0;
}
