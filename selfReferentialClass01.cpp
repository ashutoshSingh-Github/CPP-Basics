// A self-referential class in C++ is a class that contains a member that is a pointer or reference to an object of the same class type. This can create a linked structure where objects of the class are linked to each other.
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;  // Pointer to the next Node in the list

    // Constructor
    Node(int value) : data(value), next(nullptr) {} // initialiser list
    /*
    Node(int value){
        data = value;
        next = nullptr;
    }
    */
};

int main() {
    // Creating a linked list of three nodes
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Traversing the linked list and printing the data
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    // Don't forget to free the allocated memory
    current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
/*In this example, the Node class has a member next, which is a pointer to the next node in the linked list. Each node contains data and a reference to the next node. This creates a self-referential structure where the class refers to itself through the next pointer.

Self-referential classes are commonly used in data structures like linked lists, trees, and graphs, where objects of the same type are linked together to represent relationships or connections between elements.*/