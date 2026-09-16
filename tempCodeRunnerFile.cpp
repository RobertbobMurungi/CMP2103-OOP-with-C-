#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iomanip>

struct RowData {
    int index;
    std::vector<double> values; 
};

double calculateSum(const std::vector<double>& vec) {
    return std::accumulate(vec.begin(), vec.end(), 0.0);
}

double calculateMean(const std::vector<double>& vec) {
    if (vec.empty()) return 0.0;
    return calculateSum(vec) / vec.size();
}

double calculateMedian(std::vector<double> vec) {
    if (vec.empty()) return 0.0;
    std::sort(vec.begin(), vec.end());
    size_t n = vec.size();
    if (n % 2 == 0) {
        return (vec[n / 2 - 1] + vec[n / 2]) / 2.0;
    } else {
        return vec[n / 2];
    }
}

int main() {
    std::vector<RowData> dataframe = {
        {1, {100, 120, 80}},
        {2, {130, 140, 90}},
        {3, {110, 150, 100}},
        {4, {100, 105, 95}}
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
    for (const auto& row : dataframe) {
        double sum = calculateSum(row.values);
        double mean = calculateMean(row.values);
        double median = calculateMedian(row.values);

        std::cout << std::left 
                  << std::setw(6)  << row.index
                  << std::setw(8)  << row.values[0]
                  << std::setw(8)  << row.values[1]
                  << std::setw(8)  << row.values[2]
                  << std::setw(8)  << sum
                  << std::setw(10) << mean
                  << std::setw(8)  << median 
                  << "\n";
    }

    return 0;
}