// (Average speed) Assume a runner runs 14 kilometers in 45 minutes and 30 seconds.
// Write a program that displays the average speed in miles per hour. (Note that
// 1 mile is 1.6 kilometers.)

#include <iostream>

int main() {
    // Given values
    const double kilometers = 14.0;
    const double kilometers_per_mile = 1.6;
    
    // Time conversion: 45 minutes and 30 seconds into total hours
    // 45 minutes = 45 / 60 hours
    // 30 seconds = 30 / 3600 hours
    const double time_in_hours = (45.0 / 60.0) + (30.0 / 3600.0);
    
    // Distance conversion: kilometers to miles
    const double miles = kilometers / kilometers_per_mile;
    
    // Calculate average speed in miles per hour
    const double average_speed_mph = miles / time_in_hours;
    
    std::cout << "Average speed: " << average_speed_mph << " miles per hour" << std::endl;
    
    return 0;
}