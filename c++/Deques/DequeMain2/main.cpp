#include <iostream>
#include <deque>
using namespace std;

int main()
{
  deque<int> myDeque = {1, 2, 3, 4, 5};

    // insert() allows you to insert an element at a specific position
  deque<int>::iterator it = myDeque.begin() + 2;  // Iterator pointing to the third position
  myDeque.insert(it, 7);  // Insert 7 at the third position
  cout << "\nInserting an element at a specific position: "<< endl;

  for (const int& i : myDeque) {
    cout << i << "  ";
  }

  // erase() allows you to remove elements within a specified range
  deque<int>::iterator start = myDeque.begin() + 4;  // Iterator pointing to the fifth position
  deque<int>::iterator end = myDeque.begin() + 5;    // Iterator pointing to the sixth position
  myDeque.erase(start, end);  // Removes elements from the fifth to sixth position
  cout << "\nRemoving elements within a specified range: "<< endl;

  for (const int& i : myDeque) {
    cout << i << "  ";
  }

  // emplace_back() allows you to insert an element at the back in-place
  myDeque.emplace_back(8);
  cout << "\nInserting an element at the back in-place: "<< endl;

  for (const int& i : myDeque) {
    cout << i << "  ";
  }

  // emplace_front() allows you to insert an element at the front in-place
  myDeque.emplace_front(-1);
  cout << "\nInserting an element at the front in-place: "<< endl;

  for (const int& i : myDeque) {
    cout << i << "  ";
  }
    return 0;
}
