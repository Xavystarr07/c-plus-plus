#include <iostream>

int main() {
    // Outputting a triangle using ASCII art with red color and bold "Triangle"
    std::cout << "\033[1;31m   /\\\n";
    std::cout << "  /  \\\n";
    std::cout << " /    \\\n";
    std::cout << "/______\\\033[0m   Triangle\n";  // Reset color and style, followed by shape name

    // Outputting a rectangle using ASCII art with green color and bold "Rectangle"
    std::cout << "\033[1;32m ______\n";
    std::cout << "|      |\n";
    std::cout << "|      |\n";
    std::cout << "|______|\033[0m   Rectangle\n";  // Reset color and style, followed by shape name


    // Outputting a diamond using ASCII art with purple color and bold "Diamond"
    std::cout << "\033[1;35m    *\n";
    std::cout << "   ***\n";
    std::cout << "  *****\n";
    std::cout << " *******\n";
    std::cout << "  *****\n";
    std::cout << "   ***\n";
    std::cout << "    *\033[0m   Diamond\n";  // Reset color and style, followed by shape name

    // Outputting a parallelogram using ASCII art with cyan color and bold "Parallelogram"
    std::cout << "\033[1;36m   _______\n";
    std::cout << "  /      /\n";
    std::cout << " /      /\n";
    std::cout << "/______/\033[0m   Parallelogram\n";  // Reset color and style, followed by shape name

    // Outputting a hexagon using ASCII art with yellow color and bold "Hexagon"
    std::cout << "\033[1;33m  ______\n";
    std::cout << " /      \\\n";
    std::cout << "/        \\\n";
    std::cout << "\\        /\n";
    std::cout << " \\______/\033[0m   Hexagon\n";  // Reset color and style, followed by shape name

    // Outputting a pentagon using ASCII art with magenta color and bold "Pentagon"
    std::cout << "\033[1;35m   __\n";
    std::cout << "  /  \\\n";
    std::cout << " /    \\\n";
    std::cout << " \\____/\033[0m   Pentagon\n";  // Reset color and style, followed by shape name


    // Outputting a circle using ASCII art with blue color and bold "Circle"
    std::cout << "\033[1;34]    *******    \n";
    std::cout << "  *         *  \n";
    std::cout << " *           * \n";
    std::cout << " *           * \n";
    std::cout << " *           * \n";
    std::cout << "  *         *  \n";
    std::cout << "    *******    \033[0m   Circle\n";  // Reset color and style, followed by shape name

    // Outputting a smaller octagon using ASCII art with bright white color and bold "Octagon"
    std::cout << "\033[1;97m   ______  \n";
    std::cout << "  /      \\ \n";
    std::cout << " /        \\ \n";
    std::cout << "|          | \n";
    std::cout << " \\        / \n";
    std::cout << "  \\______/ \033[0m   Octagon\n";  // Reset color and style, followed by shape name


    return 0;
}

