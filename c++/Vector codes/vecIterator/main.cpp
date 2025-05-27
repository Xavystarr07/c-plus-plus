#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> myVec {1, 2, 3, 4, 5};

  // declare iterator
  vector<int>::iterator iter;

  // initialize the iterator with the first element
  iter = myVec.begin();

  // iterator points to the first element
  iter = myVec.begin();
    cout << "First Element: " << *iter << "  "<<endl;
  // iterator points to the 3rd element
  iter = myVec.begin() + 2;
  cout << "Element 3: " << *iter << endl;
  // iterator points to the last element
  iter = myVec.end() - 1;
  cout << "Last element: " << *iter << endl;

  return 0;
}
