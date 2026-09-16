#include <iostream>

int main() {
    
    const double KM_PER_MILE = 1.609;
    
    double miles = 0.0;
    
    std::cout << "Enter the distance in miles: ";
    if (std::cin >> miles) {
    
        double kilometers = miles * KM_PER_MILE;
        
        std::cout << miles << " miles is equal to " << kilometers << " kilometers.\n";
    } else {
        std::cerr << "Invalid input. Please enter a valid number.\n";
    }

    return 0;
}