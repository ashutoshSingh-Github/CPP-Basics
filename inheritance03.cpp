// multi-level inheritance
#include<iostream>
using namespace std;

class A{
    public:
    void afunc(){
        cout<<"Class A"<<endl;
    }
};
class B: public A{
    public:
    void bfunc(){
        cout<<"Class B"<<endl;
    }
};
class C : public B{};
int main(){
    C object;
    object.afunc();
    object.bfunc();
return 0;
}