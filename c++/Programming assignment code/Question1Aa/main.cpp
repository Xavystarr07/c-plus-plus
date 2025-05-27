#include<iostream>
#include<set>

using namespace std;

int checkConditions(int[][4], int , int, std::set<int>);

int main() {

    int arr[3][4] {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    std::set<int> Conditions = {1,2,3,6,7,8};

    int Result = checkConditions(arr,3,4,Conditions);

    std::cout << "Result: " << Result << std::endl;

    return 0;

}

int checkConditions(int array[][4], int rowSize, int colSize, std::set<int> Conditions) {

    bool total_elementsFound = true;

    for (int x = 0; x < rowSize; x++) {

        for (int a = 0; a < colSize; a++) {

            if (Conditions.find(array[x][a]) == Conditions.end()) {

                total_elementsFound = false;
            }

        }
    }

    //I used if else statments to check and return 0 if all elements in the array are contained in the conditions set
    if (total_elementsFound){
        return 0;
    }
    else {
        //and if any element in the array is not in the conditions set, the function should return -1.
        return -1;
    }
}
