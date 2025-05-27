#include <iostream>

int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}

int main() {
    int number = 5;
    int result = factorial(number);
    std::cout << "Factorial of " << number << " is " << result << std::endl;
    return 0;
}
