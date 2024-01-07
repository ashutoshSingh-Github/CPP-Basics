// if we dont use "virtual" in base class function definition and "override" in derived class function definition, then the program may result in unexpected behaviour especially with pointers of base class type
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display()" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display()" << endl;
    }
};

int main() {
    Derived derivedObj;
    derivedObj.display();  // Output: Derived class display()

    Base* basePtr = &derivedObj;
    basePtr->display();  // Output: Base class display()

    return 0;
}