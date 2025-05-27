#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Queue class using linked list
class DynamicQueue {
private:
    Node* front;
    Node* rear;

public:
    DynamicQueue() : front(nullptr), rear(nullptr) {}

    // Function to enqueue (insert) a new element
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to dequeue (remove) an element
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to display the elements of the queue
    void display() {
        Node* current = front;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Function to get the front element without dequeuing
    int frontValue() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return -1; // Assuming -1 as a placeholder for an empty queue
        }
        return front->data;
    }

    // Function to get the size of the queue
    int size() {
        int count = 0;
        Node* current = front;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }

    // Function to clear the queue
    void clear() {
        while (!isEmpty()) {
            dequeue();
        }
        cout << "Queue cleared." << endl;
    }
};

int main() {
    DynamicQueue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Queue elements: ";
    queue.display();

    cout << "Front element: " << queue.frontValue() << endl;
    cout << "Queue size: " << queue.size() << endl;

    queue.dequeue();
    cout << "After dequeue: ";
    queue.display();

    queue.clear();

    return 0;
}
