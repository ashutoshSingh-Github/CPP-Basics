#include<iostream>
using namespace std;

class student{
    int roll;
    int fees;

    public:
    student(int x, int y){
        roll = x;
        fees = y;
    }
    void name(){
        cout<<"This statement is for name"<<endl;
    }
    void display(){
        cout<<"Roll is "<<roll<<" and fees is "<<fees<<endl;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    student* pointer = new student(10, 500);
    student* pointer2 = pointer; // this is the second pointer pointing to the same object. this pointer can be used in case any changes are made to the first pointer in loops
    pointer->name();
    (*pointer).display(); // or pointer->display()
    delete pointer;

    return 0;
}