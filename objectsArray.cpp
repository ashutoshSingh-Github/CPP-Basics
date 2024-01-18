#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void display(){
        cout<<"The id of this item is: "<<id<<endl;
        cout<<"The price of this item is: "<<price<<endl;
    }
};
int main(){
    int x;
    float y;
    Shop *pointer = new Shop[3];

    // storing records
    for(int i=0; i<3; i++){
        cout<<"Enter the id and price for item "<<i+1<<": ";
        cin>>x>>y;
        pointer->setData(x, y);
        pointer++;
    }
    pointer = pointer - 3; // taking the pointer to the beginning of the array
    // displaying records
    for(int i=0; i<3; i++){
        cout<<"Item number "<<i+1<<": "<<endl;
        pointer->display();
        pointer++;
    }
    delete[] pointer;

    return 0;
}