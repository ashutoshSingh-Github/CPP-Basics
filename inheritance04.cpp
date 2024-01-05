//Function overriding
#include<iostream>
using namespace std;
class A {
public:
    virtual void show(){
        cout<<"\nIn Base Class A";
    }
};
class B : public A {
public:
    void show() override {
        cout<<"\nIn Derived Class B";
    }
};
int main(){
    B obj1;
    obj1.show(); //Derived class show() will be called
    // obj1.A::show();
    
    return 0;
}