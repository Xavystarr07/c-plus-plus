#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

int main() {
    using namespace std;

    // 1. Sorting the vector in ascending order.
    vector<int> myVector = {4, 2, 7, 1, 5};
    sort(myVector.begin(), myVector.end());

    // 2. Finding the iterator for the value 7 in the sorted vector.
    auto it = find(myVector.begin(), myVector.end(), 7);

    // 3. Counting occurrences of the value 4 in the vector.
    int count = count(myVector.begin(), myVector.end(), 4);

    // 4. Reversing the order of elements in the vector.
    reverse(myVector.begin(), myVector.end());

    // 5. Calculating the sum of elements in the reversed vector.
    int sum = accumulate(myVector.begin(), myVector.end(), 0);

    // 6. Transforming each element in the vector to its square.
    vector<int> squaredVector;
    transform(myVector.begin(), myVector.end(), back_inserter(squaredVector), [](int x) { return x * x; });

    // 7. Removing occurrences of the value 2 from the vector.
    auto newEnd = remove(myVector.begin(), myVector.end(), 2);

    // 8. Eliminating consecutive duplicate elements in the vector.
    newEnd = unique(myVector.begin(), myVector.end());

    // 9. Checking if the value 7 is present in the vector using binary search.
    bool found = binary_search(myVector.begin(), myVector.end(), 7);

    // 10. Randomly shuffling the elements in the vector.
    random_shuffle(myVector.begin(), myVector.end());

    // Displaying the results.
    cout << "Sorted Vector: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Element 7 " << (found ? "found" : "not found") << endl;
    cout << "Count of 4: " << count << endl;
    cout << "Sum: " << sum << endl;

    cout << "Squared Vector: ";
    for (int num : squaredVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
