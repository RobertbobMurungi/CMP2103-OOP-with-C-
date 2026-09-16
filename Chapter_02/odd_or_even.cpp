#include <iostream>

int main() {
    int value;

    std::cout << "Enter an integer: ";
    if (std::cin >> value) {
        if (value % 2 == 0) {
            std::cout << "The value " << value << " is an even number." << std::endl;
        } else {
            std::cout << "The value " << value << " is an odd number." << std::endl;
        }
    } else {
        std::cout << "Invalid input. Please enter a valid integer." << std::endl;
    }

    return 0;
}