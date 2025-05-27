#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec;
    vec.push_back(7);
    vec.push_back(5);
    vec.push_back(76);
    vec.push_back(3);
    vec.push_back(77 );

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    return 0;
}
