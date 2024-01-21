#include<iostream>
using namespace std;
void increment(int &x) {
    x++;
}
// You can pass arguments by reference using references (&). This allows the function to modify the original value of the argument.
int main() {
    int num = 5;
    increment(num);
    cout<<num<<endl;// 6
    return 0;
}