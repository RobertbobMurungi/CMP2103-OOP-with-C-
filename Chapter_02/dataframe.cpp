#include <iostream>
#include <iomanip>
#include <algorithm>

double calculateSum(const double row[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += row[i];
    }
    return sum;
}

double calculateMean(const double row[], int size) {
    if (size == 0) return 0.0;
    return calculateSum(row, size) / size;
}

double calculateMedian(const double row[], int size) {
    if (size == 0) return 0.0;
    double temp[3];
    for (int i = 0; i < size; ++i) {
        temp[i] = row[i];
    }

    for (int i = 0; i < size - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (temp[j] < temp[minIdx]) {
                minIdx = j;
            }
        }
        std::swap(temp[i], temp[minIdx]);
    }

    if (size % 2 == 0) {
        return (temp[size / 2 - 1] + temp[size / 2]) / 2.0;
    } else {
        return temp[size / 2];
    }
}

int main() {
    const int ROWS = 4;
    const int COLS = 3;

    int indices[ROWS] = {1, 2, 3, 4};
    
    double dataframe[ROWS][COLS] = {
        {100, 120, 80},
        {130, 140, 90},
        {110, 150, 100},
        {100, 105, 95}
    };
    std::cout << std::left 
              << std::setw(6)  << "ind"
              << std::setw(8)  << "ELE"
              << std::setw(8)  << "COMP"
              << std::setw(8)  << "BIO"
              << std::setw(8)  << "Sum"
              << std::setw(10) << "Mean"
              << std::setw(8)  << "Median" 
              << "\n";

    std::cout << std::string(56, '-') << "\n";

    std::cout << std::fixed << std::setprecision(2);
    for (int i = 0; i < ROWS; ++i) {
        double sum = calculateSum(dataframe[i], COLS);
        double mean = calculateMean(dataframe[i], COLS);
        double median = calculateMedian(dataframe[i], COLS);

        std::cout << std::left 
                  << std::setw(6)  << indices[i]
                  << std::setw(8)  << dataframe[i][0]
                  << std::setw(8)  << dataframe[i][1]
                  << std::setw(8)  << dataframe[i][2]
                  << std::setw(8)  << sum
                  << std::setw(10) << mean
                  << std::setw(8)  << median 
                  << "\n";
    }

    return 0;
}