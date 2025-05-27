#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>
using namespace std;

int main()
{
    vector <int> myVector {3,6,9,12,15,18,21};
    cout << "Sum of all the elements:";
    cout << accumulate(myVector.begin(),myVector.end(),0)<< endl;

   double average = accumulate(myVector.begin(),myVector.end(),0)/ myVector.size();
    cout << " The average is:" << average << endl;

    int vec1 = myVector.at(0) = 25;
    cout << " New first element: " << vec1 << endl;

    myVector.erase(6);
    cout << " Elements in reverse order:"<< " ";
    copy (myVector.rbegin(), myVector.rend(), ostream_iterator <int> (cout," "));
    return 0;
}
