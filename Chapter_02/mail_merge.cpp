#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

// Function to get ordinal suffix for day (1st, 2nd, 3rd, 4th, etc.)
std::string getOrdinalSuffix(int day) {
    if (day >= 11 && day <= 13) return "th";
    switch (day % 10) {
        case 1:  return "st";
        case 2:  return "nd";
        case 3:  return "rd";
        default: return "th";
    }
}

// Function to generate automated formatted system date
std::string getFormattedDate() {
    std::time_t now = std::time(nullptr);
    std::tm* localTime = std::localtime(&now);

    int day = localTime->tm_mday;
    int year = localTime->tm_year + 1900;

    // Array of month names
    const char* months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    std::ostringstream oss;
    oss << day << getOrdinalSuffix(day) << " " << months[localTime->tm_mon] << " " << year;
    return oss.str();
}

int main() {
    std::string fullName;
    
    std::cout << "Enter student's full name: ";
    std::getline(std::cin, fullName);

    std::istringstream stream(fullName);
    std::string firstName;
    stream >> firstName;

    std::string currentDate = getFormattedDate();
    std::cout << "\n--------------------------------------------------\n";
    std::cout << "Date: " << currentDate << "\n\n";
    std::cout << "To: " << fullName << ",\n\n";
    std::cout << "Dear " << firstName << ",\n\n";
    std::cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University\n";
    std::cout << "Admissions Board has approved your application for admission to the\n";
    std::cout << "2027/2028 academic year.\n\n";
    std::cout << "You have been offered a place for the following course:\n";
    std::cout << "PROGRAM: Bachelor of Science in Computer and Communication Engineering\n\n";
    std::cout << "As a student of Makerere University, you will be part of a historic\n";
    std::cout << "institution dedicated to academic excellence and innovation. Please ensure\n";
    std::cout << "that you report to the Academic Registrar's office with your original\n";
    std::cout << "academic documents for verification during the orientation week.\n\n";
    std::cout << "We look forward to welcoming you to the Makerere University.\n";
    std::cout << "--------------------------------------------------\n";

    return 0;
}