/**
 * @file Lab5.cpp
 * @author Abdulahi Ali
 * @date 2026-02-22
 * @brief A modular program to generate a multiplication table using functions.
 */

#include <iostream>

using namespace std;

/**
 * @brief Outputs an error message when the user enters an invalid max digit.
 * @return None.
 */
void printInputValidationError() {
    cout << "Error: The max digit must be greater than 4 and less than 10. Please try again." << endl;
}

/**
 * @brief Validates that the user input is within the allowed range.
 * @param input The user-provided integer to validate.
 * @return true if input is greater than 4 and less than 10; false otherwise.
 */
bool isMaxDigitInputValid(int input){
    return input > 4 && input < 10;
}

/**
 * @brief Prompts for max digit input and repeats until valid input is entered.
 * @return A validated maximum digit value.
 */
int getMaxDigitInput(){
    int maxDigit = 0;
    cout << "Enter the maximum digit for the multiplication table." << endl;
    cout << "The digit must be greater than 4 and less than 10" << endl;
    do {
        cout << "Max Digit: ";
        cin >> maxDigit;

        if (!isMaxDigitInputValid(maxDigit)) {
            printInputValidationError();
        }
    } while (!isMaxDigitInputValid(maxDigit));
    return maxDigit;
}

/**
 * @brief Prints a multiplication table from 1 to maxDigit.
 * @param maxDigit The highest digit to include in the table.
 * @return None.
 */
void printMultiplicationTable(int maxDigit){
    for (int row = 1; row <= maxDigit; row++) {
        for (int col = 1; col <= maxDigit; col++) {
            cout << row * col;
            if (col < maxDigit) {
                cout << "\t";
            }
        }
        cout << endl;
    }
}

/**
 * @brief Entry point of the program.
 * @return 0 to indicate successful execution.
 */
int main() {
    int maxDigit = getMaxDigitInput();
    printMultiplicationTable(maxDigit);
    return 0;
}
