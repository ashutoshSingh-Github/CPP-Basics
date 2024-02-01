#include<iostream>
using namespace std;

class base{
    public:
    base(){cout<<"Base constructor"<<endl;}

    ~base(){cout<<"Base destructor"<<endl;}
};
class derived : public base{
    public:
    derived(){cout<<"Derived constructor"<<endl;}

    ~derived(){cout<<"Derived destructor"<<endl;}
};
int main(){
    // derived* pointer = new derived;
    // delete pointer;

    // output:
    // Base constructor
    // Derived constructor
    // Derived destructor
    // Base destructor

    // base* pointer = new base;
    // delete pointer;

    // output:
    // Base constructor
    // Base destructor
    base* pointer = new derived;
    delete pointer;

    /*
    output:

    Base constructor
    Derived constructor
    Base destructor
    */
    return 0;
}