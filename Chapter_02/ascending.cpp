#include <iostream>
#include <algorithm>

int main() {
    int val1, val2, val3;

    std::cout << "Enter three integer values: ";
    if (!(std::cin >> val1 >> val2 >> val3)) {
        std::cerr << "Invalid input." << std::endl;
        return 1;
    }

    int smallest = std::min({val1, val2, val3});
    int largest = std::max({val1, val2, val3});
    int middle = (val1 + val2 + val3) - smallest - largest;

    std::cout << smallest << ", " << middle << ", " << largest << std::endl;

    return 0;
}