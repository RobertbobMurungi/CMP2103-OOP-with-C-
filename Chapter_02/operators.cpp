#include <iostream>
#include <string>

int main() {
    std::string operation;
    double val1 = 0.0;
    double val2 = 0.0;

    std::cout << "Enter an operation followed by two numbers (e.g., + 100 3.14): ";
    if (!(std::cin >> operation >> val1 >> val2)) {
        std::cerr << "Error: Invalid input format." << std::endl;
        return 1;
    }

    if (operation == "+" || operation == "plus") {
        std::cout << "Result: " << (val1 + val2) << std::endl;
    } else if (operation == "-" || operation == "minus") {
        std::cout << "Result: " << (val1 - val2) << std::endl;
    } else if (operation == "*" || operation == "mul") {
        std::cout << "Result: " << (val1 * val2) << std::endl;
    } else if (operation == "/" || operation == "div") {
        if (val2 == 0.0) {
            std::cerr << "Error: Division by zero is undefined." << std::endl;
        } else {
            std::cout << "Result: " << (val1 / val2) << std::endl;
        }
    } else {
        std::cout << "Error: Unknown operation '" << operation << "'." << std::endl;
    }

    return 0;
}