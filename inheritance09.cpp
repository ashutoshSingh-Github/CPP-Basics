#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor of class A"<<endl;
    }
    ~A(){
        cout<<"Destructor of class A"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"Constructor of class B"<<endl;
    }
    ~B(){
        cout<<"Destructor of class B"<<endl;
    }
};
class C{
    public:
    C(){
        cout<<"Constructor of class C"<<endl;
    }
    ~C(){
        cout<<"Destructor of class C"<<endl;
    }
};
class D:public A, virtual B, private C{
    public:
    D(){
        cout<<"Constructor of class D"<<endl;
    }
    ~D(){
        cout<<"Destructor of class D"<<endl;
    }
};
int main(){
    D object;

    return 0;
}