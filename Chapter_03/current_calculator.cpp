int main() {
    double t;
    std::cout << "Enter time, t (in seconds): ";
    if (!(std::cin >> t)) {
        std::cerr << "Invalid input." << std::endl;
        return 1;
    }

    double current_mA = 0.0;

    if (t > 0.0 && t < 1.0) {
        current_mA = 10.0;
    } else if (t > 1.0 && t < 3.0) {
        current_mA = -10.0;
    } else if (t > 3.0 && t < 4.0) {
        current_mA = 10.0;
    } else {
        current_mA = 0.0;
    }

    std::cout << "Current i(" << t << ") = " << current_mA << " mA" << std::endl;

    return 0;
}