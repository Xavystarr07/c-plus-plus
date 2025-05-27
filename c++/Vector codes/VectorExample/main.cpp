#include <iostream>
#include <vector>
#include <algorithm>  // for sort, reverse, min_element, max_element
#include <numeric>    // for accumulate
#include <iterator>   // for ostream_iterator
using namespace std;

int main() {
    // Section 1: Working with vectors and basic operations
    vector<int> myVector = {3, 6, 9, 12, 15, 18, 21};
    cout << "Vector elements: ";
    for (const int& num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    // Calculate sum and average of vector elements
    cout << "Sum of all elements: " << accumulate(myVector.begin(), myVector.end(), 0) << endl;
    double average = accumulate(myVector.begin(), myVector.end(), 0) / myVector.size();
    cout << "Average of elements: " << average << endl;

    // Change first element
    myVector.at(0) = 25;
    cout << "New first element: " << myVector.at(0) << endl;

    // Section 2: Sorting and Reversing vector elements
    sort(myVector.begin(), myVector.end());
    cout << "Sorted vector: ";
    for (const int& num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    reverse(myVector.begin(), myVector.end());
    cout << "Vector in reverse order: ";
    for (const int& num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    // Section 3: Adding and removing elements from a vector
    myVector.push_back(30); // Add an element to the end
    cout << "After adding 30: ";
    for (const int& num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    int elementToRemove = 6; // Element to remove
    auto removeIt = remove(myVector.begin(), myVector.end(), elementToRemove);
    myVector.erase(removeIt, myVector.end()); // Erase after removing
    cout << "After removing 6: ";
    for (const int& num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    // Section 4: Finding max and min values
    int maxValue = *max_element(myVector.begin(), myVector.end());
    int minValue = *min_element(myVector.begin(), myVector.end());
    cout << "Maximum value in vector: " << maxValue << endl;
    cout << "Minimum value in vector: " << minValue << endl;

    // Section 5: Finding the position of a specific value
    int valueToFind = 15;
    auto position = find(myVector.begin(), myVector.end(), valueToFind);
    if (position != myVector.end()) {
        cout << "Position of " << valueToFind << " in vector: " << distance(myVector.begin(), position) << endl;
    } else {
        cout << valueToFind << " not found in the vector." << endl;
    }

    // Section 6: Erasing the last element and displaying the final vector
    myVector.pop_back(); // Remove the last element
    cout << "Final vector after pop_back: ";
    for (const int& num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
