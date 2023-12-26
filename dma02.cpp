#include <iostream>
#include <cstring> // for strcpy()
using namespace std;

class stringClass{
private:
    char* str; // declaraing a character pointer

public:
    // Constructor: initializes the object with the input string
    stringClass(char* s) {
        int length = strlen(s); // length of string argument
        str = new char[length + 1]; // allocate dynamic memory for the string
        strcpy(str, s); // copy the input argument to the allocated memory
    }

    // Member function to display the stored string
    void display() {
        cout << str << endl;
    }

    // Destructor: deallocates the dynamically allocated memory
    ~stringClass() {
        cout << "Deleting str" << endl;
        delete[] str;
    }
};

int main() {
    // Create an object of the stringClass with an initial string "This is DMA example for string"
    stringClass stringObject("This is DMA example for string");

    // Display the stored string using the display() member function
    cout << "String is: ";
    stringObject.display();

    // The object goes out of scope here, and its destructor is automatically called
    // The dynamically allocated memory for 'str' is deallocated in the destructor

    return 0;
}
