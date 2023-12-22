#include<iostream>
using namespace std;

class student{
    int roll;
    float fees;
    public:
    student(int x, float f){
        roll = x;
        fees = f;
    }
    operator int(){
        return roll;
    }
    operator float(){
        return fees; // we can return whatever we want from here
    }
};
int main(){
    student s1(10,1000.231);
    int store1;
    float store2;
    int abc;
    abc = s1;
    store1 = s1; // or (int)s1;
    store2 = s1;
    cout<<"Roll number: "<<store1<<" and fees: "<<store2<<endl;
    cout<<abc<<endl;
    /* output:

    Roll number: 10 and fees: 1000.23
    10
    */

    return 0;
}
//---------------------------------------------------------------------------
//Class to basic conversion is done with the help of operator function
#include<iostream>
using namespace std;
class Distance1{
    private:
    int km,m;

    public:
    Distance1(){
        km=m=0;
    }
    void get_data(){
        cin>>km>>m;
    }
    operator int(){
        int d=km*1000+m;
    return d;
    }
};
int main(){
    int distance;
    Distance1 T1;
    cout<<"Enter the number of kilometers and metres"<<endl;
    T1.get_data();
    distance=T1;//(int)T1
    cout<<"Total Distance="<<distance<<endl;

    return 0;
}