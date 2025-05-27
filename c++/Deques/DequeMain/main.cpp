#include <iostream>
#include <deque>
using namespace std;

int main() {

  // create a deque
  deque<int> myDeque = {1, 2, 3, 4, 5};
  cout << "deque = ";

  // display deque using a ranged for loop
  for (const int& i : myDeque) {
    cout << i << "  ";
  }

  // push_back adds an element to the back of the deque
  myDeque.push_back(6);
  cout << "\nAdding an element to the back: "<< endl;

  for (const int& i : myDeque) {
    cout << i << "  ";
  }

  // push_front adds an element to the front of the deque
  myDeque.push_front(0);
  cout << "\nAdding an element to the front: "<< endl;

  for (const int& i : myDeque) {
    cout << i << "  ";
  }

  // pop_back removes the last element
  myDeque.pop_back();
  cout << "\nRemoving the last element: "<< endl;

  for (int i : myDeque) {
    cout << i << " ";
  }

  // pop_front removes the first element
  myDeque.pop_front();
  cout << "\nRemoving the first element: "<< endl;

  for (int i : myDeque) {
    cout << i << " ";
  }

  // size() returns the number of elements in the deque
  cout << "\nSize of the deque: " << myDeque.size() << endl;

  // front() returns the first element of the deque
  cout << "First element: " << myDeque.front() << endl;

  // back() returns the last element of the deque
  cout << "Last element: " << myDeque.back() << endl;

  // clear() removes all elements from the deque
  myDeque.clear();
  cout << "Deque cleared:" << endl;

  return 0;
}
