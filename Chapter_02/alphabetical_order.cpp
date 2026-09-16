#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string s1, s2, s3;
    std::cout << "Enter three string values:\n";
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    std::getline(std::cin, s3);

    if (s1 > s2) {
        std::swap(s1, s2);
    }
    if (s1 > s3) {
        std::swap(s1, s3);
    }
    if (s2 > s3) {
        std::swap(s2, s3);
    }

    std::cout << "\nOutput: " << s1 << ", " << s2 << ", " << s3 << std::endl;

    return 0;
}