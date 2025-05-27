#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> myVector = {1, 2, 3, 4, 5, 6};

    myVector.push_back(7);
    myVector.push_back(8);
    myVector.push_back(9);
    myVector.push_back(10);

    int indexElement5 = myVector[4];
    cout << "Element at the 5th index: " << indexElement5 << endl;

    cout << "Container elements: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
