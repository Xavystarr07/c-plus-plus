#include <iostream>

using namespace std;

// Defines the structure for the node
struct Node {
    int data;      // Data stored in the node.
    Node* next;    // Pointer to the next node.
};

// Function to insert a new node at the beginning of the linked list.
void insertAtBeginning(Node*& firstNode, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = firstNode;
    firstNode = newNode;
}

// Function to insert a new node at a specific position (0-based indexing).
void insertAtPosition(Node*& firstNode, int position, int newData) {
    if (position < 0) {
        cerr << "Invalid position. Position should be non-negative." << endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data = newData;
    if (position == 0) {
        newNode->next = firstNode;
        firstNode = newNode;
    } else {
        Node* current = firstNode;
        for (int i = 0; i < position - 1 && current != nullptr; i++) {
            current = current->next;
        }
        if (current == nullptr) {
            cerr << "Invalid position. Position exceeds the length of the list." << endl;
            delete newNode;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to delete a node by its value.
void deleteNodeByValue(Node*& firstNode, int target) {
    if (firstNode == nullptr) {
        return;
    }

    if (firstNode->data == target) {
        Node* temp = firstNode;
        firstNode = firstNode->next;
        delete temp;
        return;
    }

    Node* current = firstNode;
    while (current->next != nullptr && current->next->data != target) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
}

// Function to search for a value in the linked list.
bool searchValue(Node* firstNode, int target) {
    Node* current = firstNode;
    while (current != nullptr) {
        if (current->data == target) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main() {
    // Create nodes for a linked list.
    Node* firstNode = nullptr;  // The first node points to the first node in the list.
    Node* middleNode = nullptr;
    Node* lastNode = nullptr;

    // Allocate memory for the nodes.
    firstNode = new Node();
    middleNode = new Node();
    lastNode = new Node();

    // Assign data to each node.
    firstNode->data = 1;
    middleNode->data = 2;
    lastNode->data = 3;

    // Link the nodes together.
    firstNode->next = middleNode;
    middleNode->next = lastNode;
    lastNode->next = nullptr; // Marks the end of the list.

    // Traversing and printing the linked list.
    Node* current = firstNode;  // Start from the firstNode.
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    // Insert at the beginning.
    insertAtBeginning(firstNode, 0);

    // Insert at a specific position (e.g., position 2).
    insertAtPosition(firstNode, 2, 4);

    // Search for a value (e.g., search for value 3).
    bool found = searchValue(firstNode, 3);
    cout << "Value 3 found: " << (found ? "Yes" : "No") << endl;

    // Delete a node by value (e.g., delete node with value 2).
    deleteNodeByValue(firstNode, 2);

    // Traversing and printing the modified linked list.
    current = firstNode;  // Start from the firstNode.
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;

    // Clean up: deallocate memory for the nodes.
    delete firstNode;
    delete middleNode;
    delete lastNode;

    return 0;
}
