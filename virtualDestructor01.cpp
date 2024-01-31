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
    derived object;
    /*output:

    Base constructor
    Derived constructor
    Derived destructor
    Base destructor*/
    return 0;
}