#include <iostream>
#include <iomanip>

using namespace std;

// Author: Nathaniel T
// Date: 3/6/2025
// Purpose: This program calculates the number of squares that can fit within a circle 
//          by prompting the user to input the side length of the square and the diameter of the circle.

// Constant for the value of PI
const double PI = 3.14159265358979;

int main() {
    // Declared variables to hold user inputs and calculated values
    double sideOfSquare;     // Length of one side of the square
    double diameterOfCircle; // Diameter of the circle provided by the user
    double radiusOfCircle;   // Radius of the circle, derived from the diameter
    double areaOfSquare;     // Area of the square
    double areaOfCircle;     // Area of the circle
    double numberOfSquares;  // Number of squares that can fit within the circle

    // Informs the user about the purpose of the program
    cout << "This program calculates how many squares can fit in a circle.\n";

    // Prompts the user to enter the side length of the square
    cout << "Enter the side length of the square: ";
    cin >> sideOfSquare;

    // Prompts the user to enter the diameter of the circle
    cout << "Enter the diameter of the circle: ";
    cin >> diameterOfCircle;

    // Calculates the radius of the circle
    radiusOfCircle = diameterOfCircle / 2.0;

    // Calculates the area of the square
    areaOfSquare = sideOfSquare * sideOfSquare;

    // Calculates the area of the circle using the formula A = πr²
    areaOfCircle = PI * radiusOfCircle * radiusOfCircle;

    // Calculates the number of squares that can fit inside the circle
    numberOfSquares = areaOfCircle / areaOfSquare;

    // Sets output formatting to display two decimal places
    cout << fixed << setprecision(2);

    // Displays the result to the user
    cout << "You can fit approximately " << numberOfSquares
        << " squares in the circle (including fractional squares)." << endl;

    // Prevents console from closing immediately in some environments
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0; // Confirms the program ends successfully.
}
