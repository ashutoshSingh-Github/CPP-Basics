#include <iostream>
#include <string>

using namespace std;

class DynamicStringArray {
private:
    string *words; // Pointer to store dynamic array of strings
    int size; // Size of the array

public:
    // Constructor that accepts size and initializes the dynamic array
    DynamicStringArray(int newSize) {
        size = newSize;
        words = new string[size]; // Allocate memory for dynamic array of strings
    }

    // Destructor to deallocate memory when object goes out of scope
    ~DynamicStringArray() {
        delete[] words; // Deallocate the dynamic array of strings
    }

    // Function to set the value at a specific index
    void setValue(int index, const string& word) {
        if (index >= 0 && index < size) {
            words[index] = word;
        }
        else {
            cout << "Index out of range!" << endl;
        }
    }

    // Function to display the elements of the dynamic array
    void display() {
        for (int i = 0; i < size; ++i) {
            cout << words[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the dynamic array: ";
    cin >> size;

    // Create a dynamic string array object with the specified size
    DynamicStringArray stringArray(size);

    // Set values in the dynamic array of strings
    for (int i = 0; i < size; ++i) {
        string word;
        cout << "Enter word at index " << i << ": ";
        cin >> word;
        stringArray.setValue(i, word);
    }

    // Display the dynamic array of strings
    cout << "Dynamic Array of words: ";
    stringArray.display();

    return 0;
}