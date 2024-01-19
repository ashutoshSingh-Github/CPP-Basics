#include<iostream>
using namespace std;
int main(){
    int a=5;
    int* ptr = &a;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of a is: "<<*ptr<<endl;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<ptr<<endl;
    *ptr = 3;
    cout<<"The value of a is: "<<a<<endl; // 3

    int* p = new int(12); // dynamically creating a variable, assigning it an adress without naming it
    cout<<"The value at p is: "<<*(p)<<endl;
    cout<<"The address is: "<<p<<endl;

    int* q = new int[12]; // q is pointing towards the base address of a block of memory dynamically allocated to store 12 integers
    q[0] = 1;
    q[2] = 2; // or *(q+1) = 2;
    cout<<"The sample value of array elements are: "<<q[0]<<", "<<q[1]<<", "<<q[2]<<", "<<q[3]<<", "<<q[4]<<endl; // skipped assignment location q[1] is a garbage value, q[3] and so on is 0
    delete[] q;
    cout<<q[0]; // random value because after deletion the memory block is free
return 0;
}