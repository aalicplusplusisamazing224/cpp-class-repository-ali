// @file Lab3.cpp
// @author Abdulahi Ali
// @date 2025-02-20
// @brief This program is a menu driven program to calculate areas of rectangles and circles.

#include <iostream> 

using namespace std; 

int main() {
    const double PI = 3.14159; 
    int menuChoice;
    double length, width, radius, area;

    cout << "Menu:" << endl;
    cout << "1. Calculate area of a rectangle" << endl;
    cout << "2. Calculate area of a circle" << endl;
    cout << "3. Quit" << endl;
    cout << "Please make a selection: ";
    cin >> menuChoice;

    if (menuChoice == 1)
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        area = length * width;
        cout << "The area of the rectangle is: " << area << endl;
    }
    else if (menuChoice == 2)
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = PI * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
    else if (menuChoice == 3)
    {
        cout << "Exiting the program. Goodbye!" << endl;
        return 0;
    }
    else
    {
        cout << "Invalid selection. Please try again." << endl;
    }
    return 0;
 }