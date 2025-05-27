#include <iostream>
#include <vector>
using namespace std;

int main() {

  // create a vector list
  vector<int> myVec = {1, 2, 3, 4, 5};
  cout << "vector = ";

  // display vector list using a ranged for loop
  for (const int& i : myVec) {
    cout << i << "  ";
  }

  // push_back adds an element to the vector list
  myVec.push_back(6);
  cout << "\nAdding an element: "<< endl;

  for (const int& i : myVec) {
    cout << i << "  ";
  }

  // at() is used to access the element at a specific position from the vector
  cout << "\nAccessing an element: " << myVec.at(0) << endl;

  // at() is also used to change an element's value to a new value
  myVec.at(1) = 9;

  cout << "\nChanging an element: "<< endl;

  for (const int& i : myVec) {
    cout << i << "  ";
  }

  // pop_back removes the last element
  myVec.pop_back();

  cout << "\nRemoving last element: "<< endl;
  for (int i : myVec) {
    cout << i << " ";
  }

  // size() returns the number of elements in the vector
  cout << "\nSize of the vector: " << myVec.size() << endl;

  // front() returns the first element of the vector
  cout << "First element: " << myVec.front() << endl;

  // back() returns the last element of the vector
  cout << "Last element: " << myVec.back() << endl;

  // clear() removes all elements from the vector
  myVec.clear();
  cout << "Cleared Vector" << endl;

  return 0;
}
