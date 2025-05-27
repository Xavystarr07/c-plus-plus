#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printPreOrder(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printInOrder(Node* root) {
    if (root == nullptr)
        return;

    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

void printPostOrder(Node* root) {
    if (root == nullptr)
        return;

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

int main() {

    // level 1
    Node* root = createNode(1);

    // level 2
    root->left = createNode(2);
    root->right = createNode(3);

    // level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // level 4
    root->left->left->left = createNode(8);
    root->right->right->right = createNode(9);

    cout << "Pre-order traversal: ";
    printPreOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    printInOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    printPostOrder(root);
    cout << endl;

    cin.get();
    return 0;
}
