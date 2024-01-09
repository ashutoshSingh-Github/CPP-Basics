#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class default constructor" << endl;
    }

    Base(int val) {
        cout << "Base class parameterized constructor with value: " << val << endl;
    }

    ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class default constructor" << endl;
    }

    Derived(int val) : Base(val) {
        cout << "Derived class parameterized constructor with value: " << val << endl;
    }

    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Derived derivedObj(42);
    return 0;
}