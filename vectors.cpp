#include <iostream>
using namespace std;

class Vector {
private:
    int* data;
    int _size;
    int _capacity;

    void resize(int newCap) {
        int* newData = new int[newCap];
        for (int i = 0; i < _size; i++) newData[i] = data[i];
        delete[] data;
        data = newData;
        _capacity = newCap;
    }

public:
    Vector() {
        _size = 0;
        _capacity = 4;
        data = new int[_capacity];
    }

    ~Vector() {
        delete[] data;
    }

    void push_back(int value) {
        if (_size == _capacity) resize(_capacity * 2);
        data[_size++] = value;
    }

    void pop_back() {
        if (_size > 0) _size--;
    }

    int& operator[](int index) {
        return data[index];
    }

    int size() { return _size; }

    void print() {
        cout << "[ ";
        for (int i = 0; i < _size; i++)
            cout << data[i] << " ";
        cout << "]" << endl;
    }
};

int main() {
    cout << "=== Vector Test ===" << endl;
    Vector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.print();
    cout << "Size: " << v.size() << endl;
    v.pop_back();
    v.print();
    cout << "v[0] = " << v[0] << endl;
    return 0;
}
