#include <iostream>

using namespace std; // Added using namespace std

// Define the structure for a node in the doubly linked list.
struct Node {
    int data;        // Data stored in the node.
    Node* next;      // Pointer to the next node.
    Node* previous;  // Pointer to the previous node.
};

int main() {
    // Create nodes for a doubly linked list.
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data to each node.
    first->data = 1;
    second->data = 2;
    third->data = 3;

    // Link the nodes together.
    first->next = second;
    second->previous = first;
    second->next = third;
    third->previous = second;

    // Traversing forward and printing the doubly linked list.
    Node* current = first;
    while (current != nullptr) {
        cout << current->data << " <-> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    // Traversing backward and printing the doubly linked list.
    current = third;
    while (current != nullptr) {
        cout << current->data << " <-> ";
        current = current->previous;
    }
    cout << "nullptr" << endl;

    // Clean up: deallocate memory for the nodes.
    delete first;
    delete second;
    delete third;

    return 0;
}
