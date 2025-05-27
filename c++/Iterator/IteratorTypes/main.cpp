#include <iostream>
#include <vector>
#include <forward_list>
#include <list>

using namespace std;

int main() {
    // Vector with random access iterator
    vector<int> myVector = {1, 2, 3, 4, 5};
    cout << "Vector elements using random access iterator: ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Forward list with forward iterator
    forward_list<int> myList = {1, 2, 3, 4, 5};
    cout << "Forward list elements using forward iterator: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // List with bidirectional iterator
    list<int> myBidirectionalList = {1, 2, 3, 4, 5};
    cout << "List elements using bidirectional iterator: ";
    for (auto it = myBidirectionalList.begin(); it != myBidirectionalList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Vector with input iterator (const)
    const vector<int> myConstVector = {1, 2, 3, 4, 5};
    cout << "Vector elements using input iterator (const): ";
    for (auto it = myConstVector.begin(); it != myConstVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Vector with output iterator
    vector<int> myOutputVector = {1, 2, 3, 4, 5};
    cout << "Vector elements using output iterator: ";
    for (auto it = myOutputVector.begin(); it != myOutputVector.end(); ++it) {
        *it = *it * 2; // Double each element
    }
    for (const auto& num : myOutputVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

