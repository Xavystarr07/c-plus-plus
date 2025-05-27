#include <iostream>
#include <string>

void printUserDetails(const std::string& name, const std::string& surname, int age) {
    if (age >= 18) {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Surname: " << surname << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "We are happy to say you're now an adult." << std::endl;
    } else {
        int yearsRemaining = 18 - age;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Surname: " << surname << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Sorry, you are still young and you have " << yearsRemaining << " years before you turn 18." << std::endl;
    }
}

int main() {
    std::string name;
    std::string surname;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your surname: ";
    std::cin >> surname;

    std::cout << "Enter your age: ";
    std::cin >> age;

    printUserDetails(name, surname, age);

    return 0;
}
