#include <iostream>
#include <string>

std::string getDay(int num) {
    std::string days[] = {
        "",         // 0 - Return invalid input
        "Sunday",   // 1
        "Monday",   // 2
        "Tuesday",  // 3
        "Wednesday",// 4
        "Thursday", // 5
        "Friday",   // 6
        "Saturday"  // 7
    };

    if (num >= 1 && num <= 7) {
        return days[num];
    } else {
        return "Invalid input";
    }
}

int main() {
    int num;

    std::cout << "Enter a positive integer (1-7): ";
    std::cin >> num;

    std::string days = getDay(num);

    std::cout << "The day of the week is: " << days << std::endl;

    return 0;
}

