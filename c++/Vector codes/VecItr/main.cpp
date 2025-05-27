#include <iostream>
#include <vector>
#include <algorithm>  // Required for reverse
using namespace std;

int main() {

  // create a vector list
  vector<int> myVec = {1, 2, 3, 4, 5};
  cout << "vector = ";

  // display vector list using a ranged for loop
  for (const int& i : myVec) {
    cout << i << "  ";
  }

  // Calculate the sum of elements
  int sum = 0;
  for (const int& i : myVec) {
    sum += i;
  }
  cout << "\nSum of elements: " << sum << endl;

  // Calculate the average of elements
  double average = static_cast<double>(sum) / myVec.size();
  cout << "Average of elements: " << average << endl;

  // Display elements in reverse order
  reverse(myVec.begin(), myVec.end());
  cout << "Vector in reverse order: ";
  for (const int& i : myVec) {
    cout << i << "  ";
  }

  cout << endl;

  return 0;
}
