#include<iostream>
using namespace std;

void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}
// In C++, when you pass an array to a function, what's actually happening is that the array "decays" into a pointer to its first element. This means that when you declare a function with a parameter of type int*, you can still pass an array to it, and the function will receive a pointer to the first element of the array.
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    modifyArray(numbers, 5);
    // numbers is now {2, 4, 6, 8, 10}
    for(int i=0; i<5; i++){
        cout<<numbers[i]<<"  ";
    }
    return 0;
}
// Here, numbers is an array of integers. When you pass numbers to modifyArray, it decays into a pointer to the first element of the array (&numbers[0]). The function modifyArray receives this pointer as its first argument, and the code inside the function works with this pointer to modify the elements of the array.

// So, even though the function parameter is declared as int* arr, you can pass an array to it, and the array will be treated as a pointer to its first element. This is a feature of C and C++ that allows for more flexible array handling in function arguments.