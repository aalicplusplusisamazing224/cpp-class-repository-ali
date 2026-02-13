// @file lab4.cpp 
// @author Abdulahi Ali 
// @date 2025-02-12 
// @brief This program generates a multiplcation table with input validation. 

#include <iostream>

using namespace std;

int main() {
    int maxDigit = 0;

    cout << "Please enter the maximum digit for the multiplication table." << endl;
    cout << "The digit must be greater than 4 and less than 10" << endl;

    do {
        cout << "Max Digit: ";
        cin >> maxDigit;

        if (maxDigit <= 4 || maxDigit >= 10) {
            cout << "Error: The max digit must be greater than 4 and less than 10. Please try again." << endl;
        }
    } while (maxDigit <= 4 || maxDigit >= 10);

    for (int row = 1; row <= maxDigit; row++) {
        for (int col = 1; col <= maxDigit; col++) {
            cout << row * col;
            if (col < maxDigit) {
                cout << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}