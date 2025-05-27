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

  // insert() allows you to insert an element at a specific position
  list<int>::iterator it = myList.begin();
  ++it;  // Move the iterator to the second position
  myList.insert(it, 6);  // Insert 6 at the second position
  cout << "\nInserting an element at a specific position: "<< endl;

  for (const int& i : myList) {
    cout << i << "  ";
  }

  // erase() allows you to remove elements within a specified range
  list<int>::iterator start = myList.begin();
  list<int>::iterator end = myList.begin();
  std::advance(end, 2);  // Advance the iterator to the third position
  myList.erase(start, end);  // Removes elements from the first to second position
  cout << "\nRemoving elements within a specified range: "<< endl;

  for (const int& i : myList) {
    cout << i << "  ";
  }

  // remove() removes all elements with a specific value
  myList.remove(4);  // Removes all occurrences of the value 4
  cout << "\nRemoving all occurrences of a specific value: "<< endl;

  for (const int& i : myList) {
    cout << i << "  ";
  }

  // reverse() reverses the order of elements in the list
  myList.reverse();
  cout << "\nReversing the order of elements: "<< endl;

  for (const int& i : myList) {
    cout << i << "  ";
  }

  // sort() sorts the elements in ascending order
  myList.sort();
  cout << "\nSorting the elements in ascending order: "<< endl;

  for (const int& i : myList) {
    cout << i << "  ";
  }

  // unique() removes consecutive duplicate elements
  myList.unique();
  cout << "\nRemoving consecutive duplicates: "<< endl;

  for (const int& i : myList) {
    cout << i << "  ";
  }

  cout << endl;

  return 0;
}
