#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int isNonResident;
    double CY, tax = 0.0;

    cout << "(0-Resident, 1-Non-resident)" << endl;
    cout << "Enter the residence status: ";
    cin >> isNonResident;

    cout << "Enter the taxable income: ";
    cin >> CY;

    if (isNonResident == 0) {
        // Resident Taxation
        if (CY <= 2820000) {
            tax = 0;
        } else if (CY <= 4020000) {
            tax = (CY - 2820000) * 0.10;
        } else if (CY <= 4920000) {
            tax = (CY - 4020000) * 0.20 + 120000;
        } else if (CY <= 120000000) {
            tax = (CY - 4920000) * 0.30 + 300000;
        } else {
            tax = ((CY - 4920000) * 0.30 + 300000) + ((CY - 120000000) * 0.10);
        }
    } else {
        // Non-Resident Taxation
        if (CY <= 2820000) {
            tax = CY * 0.10;
        } else if (CY <= 4020000) {
            tax = CY * 0.10;
        } else if (CY <= 4920000) {
            tax = (CY - 4020000) * 0.20 + 402000;
        } else if (CY <= 120000000) {
            tax = (CY - 4920000) * 0.30 + 582000;
        } else {
            tax = ((CY - 4920000) * 0.30 + 582000) + ((CY - 120000000) * 0.10);
        }
    }

    cout << fixed << setprecision(0);
    cout << "Tax is " << tax << "." << endl;

    return 0;
}