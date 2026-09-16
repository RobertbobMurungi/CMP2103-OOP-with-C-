#include <iostream>
#include <iomanip>

int main() {
    // Initial base population
    long long currentPopulation = 312032486;

    // Time constants
    const int SECONDS_PER_MINUTE = 60;
    const int MINUTES_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;
    const int DAYS_PER_YEAR = 365;

    const long long SECONDS_PER_YEAR = (long long)DAYS_PER_YEAR * HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE;

    // Rates of change per year using integer division
    long long birthsPerYear = SECONDS_PER_YEAR / 7;
    long long deathsPerYear = SECONDS_PER_YEAR / 13;
    long long immigrantsPerYear = SECONDS_PER_YEAR / 45;

    // Net annual population change
    long long annualNetChange = birthsPerYear - deathsPerYear + immigrantsPerYear;

    std::cout << std::left << std::setw(8) << "Year" << "Projected Population" << std::endl;
    std::cout << "----------------------------" << std::endl;

    for (int year = 1; year <= 5; ++year) {
        currentPopulation += annualNetChange;
        std::cout << std::left << std::setw(8) << year << currentPopulation << std::endl;
    }

    return 0;
}