#include<iostream>
using namespace std;

class Shape {
public:
    void draw() {
        // Base class implementation of draw function
        // This function can be overridden by derived classes
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw(){
        // Derived class implementation of draw function
        // This overrides the base class implementation
        cout << "Drawing a circle" << endl;
    }
};
int main() {
    Circle object;
    object.draw();  // Output: Drawing a circle
    object.Shape::draw(); // Output: Drawing a shape
    return 0;
}