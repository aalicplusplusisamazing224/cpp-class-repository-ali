// @file lab2 
// @author Abdulahi Ali
// @date 2026-02-01
// @brief This program calculates the perimeter of a rectangle from user input. 

    #include <iostream>
    using namespace std;

    int main() {
        double length, width, perimeter;
        
        cout << "This application will calculate the perimeter of a rectangle." << endl;
        cout << "Please enter the length of the rectangle: ";
        cin >> length;
        cout << "Please enter the width of the rectangle: "; 
        cin >> width;
        perimeter = 2 * (length + width);
        cout << "The perimeter of the rectangle is: " << perimeter << endl;
        return 0;
    }