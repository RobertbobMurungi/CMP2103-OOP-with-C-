#include <iostream>
#include <algorithm>

int main() {
    double val1 = 0.0;
    double val2 = 0.0;

    std::cout << "Enter two floating-point values: ";
    if (std::cin >> val1 >> val2) {
        double smaller = std::min(val1, val2);
        double larger = std::max(val1, val2);
        double sum = val1 + val2;
        double diff = val1 - val2;
        double prod = val1 * val2;

        std::cout << "\n--- Results ---\n";
        std::cout << "Smaller value: " << smaller << "\n";
        std::cout << "Larger value:  " << larger << "\n";
        std::cout << "Sum:           " << sum << "\n";
        std::cout << "Difference:    " << diff << "\n";
        std::cout << "Product:       " << prod << "\n";

        if (val2 != 0) {
            std::cout << "Ratio:         " << val1 / val2 << "\n";
        } else {
            std::cout << "Ratio:         Undefined (division by zero)\n";
        }
    }
    return 0;
}