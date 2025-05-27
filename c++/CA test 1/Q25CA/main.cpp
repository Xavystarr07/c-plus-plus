#include <iostream>
#include <string>

int main() {
    std::string myStudents[5] = {"Jane", "Lindiwe", "Tshireledzo", "Ashley", "Andrea"};

    for (int x = 0; x < 5; x++) {
        std::cout << "Student " << (x + 1) << ": " << myStudents[x] << std::endl;
    }

    return 0;
}

