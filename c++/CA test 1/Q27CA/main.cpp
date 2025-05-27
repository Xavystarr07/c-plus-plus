#include <iostream>

int main() {
    int num = 0;

    while (num < 100) {
        if (num % 2 == 0) {
            std::cout << num << std::endl;
        }
        num++;
    }

    return 0;
}
