// Power loss is formally defined as the product of resistance and the square of the current.
// Resistance is defined as resistivity * (L / A), where L is the length and A is the cross-sectional area.

// Write a program that prompts the user to enter L, A, resistivity, and current,
// and returns the power loss of a transmission line.

#include <iostream>

int main() {
    double length = 0.0;
    double area = 0.0;
    double resistivity = 0.0;
    double current = 0.0;

    // Prompt user for inputs
    std::cout << "Enter conductor length (L): ";
    std::cin >> length;

    std::cout << "Enter cross-sectional area (A): ";
    std::cin >> area;

    std::cout << "Enter material resistivity: ";
    std::cin >> resistivity;

    std::cout << "Enter current (I): ";
    std::cin >> current;

    // Input validation to avoid division by zero
    if (area <= 0.0) {
        std::cerr << "Error: Cross-sectional area must be greater than zero." << std::endl;
        return 1;
    }

    // Formulas: R = resistivity * (L / A), P_loss = I^2 * R
    double resistance = resistivity * (length / area);
    double power_loss = current * current * resistance;

    // Output results
    std::cout << "\nCalculated Resistance: " << resistance << " ohms" << std::endl;
    std::cout << "Transmission Line Power Loss: " << power_loss << " watts" << std::endl;

    return 0;
}