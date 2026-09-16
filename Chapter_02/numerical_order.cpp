#include <iostream>
#include <algorithm> // for std::min and std::max

int main() {
    int val1, val2;

    std::cout << "Enter two integer values: ";
    if (!(std::cin >> val1 >> val2)) {
        std::cerr << "Invalid input. Please enter integers only." << std::endl;
        return 1;
    }

    // Determine values and perform calculations
    int smaller = std::min(val1, val2);
    int larger = std::max(val1, val2);
    int sum = val1 + val2;
    int difference = val1 - val2;
    int product = val1 * val2;


    std::cout << "\n--- Results ---\n";
    if (val1 == val2) {
        std::cout << "Both values are equal (" << val1 << ").\n";
    } else {
        std::cout << "Smaller: " << smaller << "\n";
        std::cout << "Larger: " << larger << "\n";
    }
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference (val1 - val2): " << difference << "\n";
    std::cout << "Product: " << product << "\n";

    if (val2 != 0) {
        double ratio = static_cast<double>(val1) / val2;
        std::cout << "Ratio (val1 / val2): " << ratio << "\n";
    } else {
        std::cout << "Ratio (val1 / val2): Undefined (cannot divide by zero)\n";
    }

    return 0;
}