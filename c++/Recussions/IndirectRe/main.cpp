#include <iostream>

bool isEven(int n);  // Function prototype

bool isOdd(int n) {
    if (n == 0) {
        return false;  // Base case
    } else {
        return isEven(n - 1);  // Indirect call to isEven
    }
}

bool isEven(int n) {
    if (n == 0) {
        return true;  // Base case
    } else {
        return isOdd(n - 1);  // Indirect call to isOdd
    }
}

int main() {
    int number = 5;
    bool isNumberEven = isEven(number);
    std::cout << "Is " << number << " even? " << std::boolalpha << isNumberEven << std::endl;
    return 0;
}
