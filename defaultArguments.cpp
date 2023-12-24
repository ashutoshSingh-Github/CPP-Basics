#include <iostream>
using namespace std;

// Function with a default argument
void printMessage(string message = "Hello, World!") {
    cout << message << endl;
}

int main() {
    // Calling the function without providing an argument
    printMessage();  // Output: Hello, World!

    // Calling the function with an argument
    printMessage("Greetings!");  // Output: Greetings!

    return 0;
}
