#include <iostream>

using namespace std; // Added using namespace std

// Define the structure for a node in the circular linked list.
struct Node {
    int data;      // Data stored in the node.
    Node* next;    // Pointer to the next node.
};

int main() {
    // Create nodes for a circular linked list.
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data to each node.
    first->data = 1;
    second->data = 2;
    third->data = 3;

    // Link the nodes together in a circular manner.
    first->next = second;
    second->next = third;
    third->next = first;  // Points back to the first node.

    // Traversing and printing the circular linked list.
    Node* current = first;
    do {
        cout << current->data << " -> ";
        current = current->next;
    } while (current != first);  // Continue until we reach the first node again.

    cout << " (back to the beginning)" << endl;

    // Clean up: deallocate memory for the nodes.
    delete first;
    delete second;
    delete third;

    return 0;
}
