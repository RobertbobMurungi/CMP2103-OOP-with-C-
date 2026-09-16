#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << left << setw(15) << "Date" << "Quantity" << endl;

    cout << setfill('0') << setw(2) << 8 << "/"
         << setfill('0') << setw(1) << 8 << "/"
         << 2026
         << setfill(' ') << setw(7) << "" << 40 << endl;
    cout << setfill('0') << setw(2) << 10 << "/"
         << setfill('0') << setw(1) << 8 << "/"
         << 2026
         << setfill(' ') << setw(7) << "" << 60 << endl;

    cout << setfill('0') << setw(2) << 12 << "/"
         << setfill('0') << setw(1) << 8 << "/"
         << 2027
         << setfill(' ') << setw(7) << "" << 90 << endl;

    return 0;
}