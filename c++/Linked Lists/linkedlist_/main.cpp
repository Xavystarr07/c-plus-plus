#include <iostream>
using namespace std;

class Node {
public:         // makes elements accessible since their private by default
    int Value;
    Node* Next;
    };

void printList(Node*n){             // a function that prints out the linked-list
    while (n!=NULL){                 //runs each node and its elements till it reaches NULL
        cout << n->Value << endl;
        n = n->Next;
    }
}

int main()
{
    Node* head = new Node(); // first element
    Node* second = new Node(); // second element
    Node* third = new Node(); // third element

    head->Value = 1;
    head->Next = second; // first element points to the second

    second->Value = 2;
    second->Next = third; // second element points to the third

    third->Value = 3;
    third->Next = NULL; // last element points to NULL, indicates end of list

    printList(head);

    return 0;
}
