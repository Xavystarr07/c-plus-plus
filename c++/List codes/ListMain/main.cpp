#include <iostream>
#include <list>
using namespace std;

int main() {

  // create a list
  list<int> myList = {1, 2, 3, 4, 5};
  cout << "list = ";

  // display list using a ranged for loop
  for (const int& i : myList) {
    cout << i << "  ";
  }

  // push_back adds an element to the back of the list
  myList.push_back(6);
  cout << "\nAdding an element to the back: "<< endl;

  for (const int& i : myList) {
    cout << i << "  ";
  }

  // push_front adds an element to the front of the list
  myList.push_front(0);
  cout << "\nAdding an element to the front: "<< endl;

  for (const int& i : myList) {
    cout << i << "  ";
  }

  // pop_back removes the last element
  myList.pop_back();
  cout << "\nRemoving the last element: "<< endl;

  for (int i : myList) {
    cout << i << " ";
  }

  // pop_front removes the first element
  myList.pop_front();
  cout << "\nRemoving the first element: "<< endl;

  for (int i : myList) {
    cout << i << " ";
  }

  // size() returns the number of elements in the list
  cout << "\nSize of the list: " << myList.size() << endl;

  // front() returns the first element of the list
  cout << "First element: " << myList.front() << endl;

  // back() returns the last element of the list
  cout << "Last element: " << myList.back() << endl;

  // clear() removes all elements from the list
  myList.clear();
  cout << "List Cleared: << endl;

  return 0;
}

