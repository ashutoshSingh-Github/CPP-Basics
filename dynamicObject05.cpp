#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *arr; // Pointer to store dynamic array
    int size; // Size of the array

public:
    // Constructor that accepts size and initializes the dynamic array
    DynamicArray(int newSize) {
        size = newSize;
        arr = new int[size]; // Allocate memory for the dynamic array
    }

    // Destructor to deallocate memory when object goes out of scope
    ~DynamicArray() {
        delete[] arr; // Deallocate the memory reserved for the dynamic array
    }

    // Function to set the value at a specific index
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            arr[index] = value;
        }
        else {
            cout << "Index out of range!" << endl;
        }
    }

    // Function to display the elements of the dynamic array
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the dynamic array: ";
    cin >> size;

    // Create a dynamic array object with the specified size
    DynamicArray dynamicArray(size);

    // Set values in the dynamic array
    for (int i = 0; i < size; ++i) {
        int value;
        cout << "Enter element at index " << i << ": ";
        cin >> value;
        dynamicArray.setValue(i, value);
    }

    // Display the dynamic array
    cout << "Dynamic Array elements: ";
    dynamicArray.display();

    return 0;
}