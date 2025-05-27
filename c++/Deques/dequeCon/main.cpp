#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> myVector = {1, 2, 3, 4, 5, 6};

    myVector.push_back(7);
    myVector.push_back(8);
    myVector.push_back(9);
    myVector.push_back(10);

    cout << "Element at the 5th index: " << myVector.at(5) << endl;

    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout <<endl;

    for(auto i = myVector.begin(); i!myVector.end(); i++){
        cout<<*i<<" ";
    }

    deque<int> dq;

    cout << dq.size();
    dq.push_back(1);
    cout << dq.size();
    dq.push_front(8);

    for(int i = 0; i<dq.size(); i++)
        cout << dq[i] << " ";

    return 0;
}
