#include<iostream>
using namespace std;

class className{
    public:
    className(){
        cout<<"Constructor called"<<endl;
    }
    ~className(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    int number = 0;
    cout<<"Enter the number of objects you want to create: ";
    cin>>number;
    className* pointer = new className[number];
    delete[] pointer;

    return 0;
}