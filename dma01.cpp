#include<iostream>
using namespace std;

class Array{
    int size;
    int* arrayPointer;
    public:
    void getData(int x){
        size = x;
        arrayPointer = new int(size);
        cout<<"Enter "<<size<<" elements: ";
        for(int i=0; i<x; i++){
            cin>>arrayPointer[i];
        }
    }
    int getSum(){
        int sum=0;
        for(int i=0; i<size; i++){
            sum = sum+ arrayPointer[i];
        }
        return sum;
    }

    void display(){
        cout<<"The array elements are: ";
        for(int i=0; i<size; i++){
            cout<<arrayPointer[i]<<" ";
        }
        cout<<endl<<"The sum is: "<<getSum()<<endl;
    }
};
int main(){
    Array a;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    a.getData(n);
    a.display();

    return 0;
}