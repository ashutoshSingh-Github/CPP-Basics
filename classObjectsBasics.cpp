#include<iostream>
using namespace std;

class Complex{
    int imaginary, real;
    public:
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
    void display(){
        cout<<"The real part is: "<<real<<endl;
        cout<<"The imaginary part is: "<<imaginary<<endl;
    }
};
int main(){
    Complex c;
    Complex *pointer = &c;
    c.setData(1, 2); // or (*pointer).setData(1, 2);
    (*pointer).display(); // or c.display();
    
    return 0;
}
// dynamically allocating the memory to object -- accessing using address without name
#include<iostream>
using namespace std;

class abc{
    private:
    int a, b, c;
    public:
    void setDataHere(int x, int y, int z){
        a = x;
        b = y;
        c = z;
    }
    int getSum(int p, int q, int r){
        return (p + q + r);
    }
    void display();
};
void abc :: display(){
    cout<<"a, b and c are: "<<a<<", "<<b<<" and "<<c<<" respectively"<<endl;
    cout<<"The sum is "<<getSum(a,b,c)<<endl;
}
int main(){
    // abc object;
    // abc *pointer = &object;
    abc *pointer = new abc; // without naming the object, we can access the class members and member functions with the help of address using pointers
    (*pointer).setDataHere(1, 2, 3);
    (*pointer).display();

    // to demonstrate the use of arrow operator
    abc* pointer2 = new abc;
    pointer2 -> setDataHere(10, 20, 30);
    pointer2 -> display();
    
return 0;
}