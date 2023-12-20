#include<iostream>
using namespace std;

class time{
    int hours, minutes;
    public:
    time(int number){
        hours = number/60;
        minutes = number%60;
    }
    void display(){
        cout<<"The time is "<<hours<<" hours and "<<minutes<<" minutes"<<endl;
    }
};
int main(){
    time object(100);
    object.display();

    return 0;
}