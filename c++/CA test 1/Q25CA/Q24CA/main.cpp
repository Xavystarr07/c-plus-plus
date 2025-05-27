#include <iostream>

int main() {
    int myValue = 62;

    // Task 1: Prints the address of the variable
    std::cout << "Address of myValue: " << &myValue << std::endl;

    // Task 2: Declare a pointer and assign the address of myValue
    int* myValuePointer = &myValue;

    return 0;
}
