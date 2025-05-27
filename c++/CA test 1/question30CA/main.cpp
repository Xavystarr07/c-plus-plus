#include <iostream>
#include <string>

int main() {
    int numStudents;

    std::cout << "Enter the number of students enrolled in the class: ";
    std::cin >> numStudents;

    std::string* studentNames = new std::string[numStudents];

    for (int x = 0; x < numStudents; x++) {
        std::cout << "Enter the name of the student: " << (x + 1) << ": ";
        std::cin >> studentNames[x];
    }

    std::cout << "\n List of students in the class:\n";
    for (int x = 0; x < numStudents; x++) {
        std::cout << studentNames[x] << std::endl;
    }

    delete[] studentNames;
    return 0;
}

