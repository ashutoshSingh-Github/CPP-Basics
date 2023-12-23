// It's essential to ensure that the base class (parent class) constructor is appropriately called from the derived class (child class) constructor. This is crucial for proper initialization of the base class part of the derived class object.
#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    // Parameterized constructor for Animal class
    Animal(string _name) : name(_name) {
        cout << "Animal constructor called with name: " << name << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
private:
    string breed;

public:
    // Parameterized constructor for Dog class
    Dog(string _name, string _breed) : Animal(_name), breed(_breed) {
        cout << "Dog constructor called with breed: " << breed << endl;
    }

    void displayDogInfo() {
        displayInfo(); // Calling base class method
        cout << "Breed: " << breed << endl;
    }
};

int main() {
    // Creating an object of the derived class Dog
    Dog myDog("Buddy", "Golden Retriever");

    // Calling a method of the derived class
    myDog.displayDogInfo();

    return 0;
}
/*
In this example, the Animal class has a parameterized constructor that initializes the name member. The Dog class is derived from Animal and has its own parameterized constructor that initializes both the name (via the base class constructor) and the breed members.

When creating an object of the Dog class (myDog), the base class constructor is automatically called, ensuring proper initialization of the Animal part of the Dog object. The displayDogInfo method demonstrates how to call a method from the base class within the derived class.

Remember that in C++, the base class constructor is called implicitly, but you can explicitly call it within the initializer list of the derived class constructor, as shown in the example.
*/