// this pointer
#include<iostream>
using namespace std;

class MyClass {
public:
    void printAddress() {
        cout<< "Object address: "<<this <<endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2;
    
    obj1.printAddress(); // Output: Object address: 0x7ffd2a18b9e0
    obj2.printAddress(); // Output: Object address: 0x7ffd2a18b9e4
    return 0;
}
// distinguishing between local variable and class data members when both of them have the same name
#include<iostream>
using namespace std;
class photo{
    private:
    int var;
    public:
    void set(int var){
        this->var = var;
    }
    void display()
    {
        cout<<this<<endl;
        cout<<var; //20
    }
};
int main(){
    photo abc;
    abc.set(20);
    abc.display();

    return 0;
}
// method chaining: each method returns an object and allows the code to be chained in a single statement
// obj->set(8)->replace(9)->inc(12)   these methods - set(), replace() and inc() are chained together
// calling methods using 'this' keyword
#include<iostream>
using namespace std;

class word{
    public:
    void dictionary();
    void letter(){
        cout<<"Letter method"<<endl;
        dictionary();
    }
    void text(){
        cout<<"Text method"<<endl;
        this->letter();
    }
    word(){
        cout<<"Constructor called"<<endl;
        text();
    }
};
void word :: dictionary(){
    cout<<"Dictionary method"<<endl;
}
int main(){
    word w;
    // outpur:
    //  Constructor called
    //  Text method
    //  Letter method
    //  Dictionary method
    return 0;
}
// method chaining
#include<iostream>
using namespace std;

class test{
    private :
    int number;
    public:
    test &assign(int passedNumber){ // 'test' is the data type and '&' is the address-of operator
        this->number = passedNumber+100;

        return *this; // when the reference to the object is returned then it can be used to chain the methods
    }
    void show(){
        cout<<"The value of num is: "<<number;
    }
};

int main(){
    test t1;
    t1.assign(25).show();

    return 0;
}