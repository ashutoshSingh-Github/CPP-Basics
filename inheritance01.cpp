// single inheritance
#include<iostream>
using namespace std;

class base{
    public:
    void func(){
        cout<<"Base class function"<<endl;
    }
};
class derived : public base{};
int main(){
    derived object;
    object.func();

    return 0;
}