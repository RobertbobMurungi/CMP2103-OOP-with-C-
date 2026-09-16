#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a spelled-out number (e.g., 'zero' to 'four'): ";
    std::cin >> input;

    if (input == "zero") {
        std::cout << 0 << std::endl;
    } else if (input == "one") {
        std::cout << 1 << std::endl;
    } else if (input == "two") {
        std::cout << 2 << std::endl;
    } else if (input == "three") {
        std::cout << 3 << std::endl;
    } else if (input == "four") {
        std::cout << 4 << std::endl;
    } else {
        std::cout << "not a number I know" << std::endl;
    }

    return 0;
}