#include <iostream>

int main() {
    // Defined conversion constants
    const double KILOGRAMS_PER_POUND = 0.45359237;
    const double METERS_PER_INCH = 0.0254;

    // Prompt user for input
    double weightPounds = 0.0;
    double heightInches = 0.0;

    std::cout << "Enter weight in pounds: ";
    std::cin >> weightPounds;

    std::cout << "Enter height in inches: ";
    std::cin >> heightInches;

    // Convert measurements to metric
    double weightKg = weightPounds * KILOGRAMS_PER_POUND;
    double heightMeters = heightInches * METERS_PER_INCH;

    // Calculate BMI
    double bmi = weightKg / (heightMeters * heightMeters);

    std::cout << "BMI is " << bmi << std::endl;

    // Determine weight category based on specified ranges
    if (bmi < 18.5) {
        std::cout << "Underweight" << std::endl;
    } else if (bmi < 25.0) {
        std::cout << "Normal" << std::endl;
    } else if (bmi < 30.0) {
        std::cout << "Overweight" << std::endl;
    } else {
        std::cout << "Obese" << std::endl;
    }

    return 0;
}