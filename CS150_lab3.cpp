#include <iostream>
#include <cmath>
#include <iomanip>

// cstdlib added for the exit() function
#include <cstdlib>

using namespace std;

int main()
{
    // Variables for the three sides of the triangle
    // 2 short sides and 1 long
    double sideA;
    double sideB;
    double sideC;

    // Output for what this program is
    cout << "-----------------------------------------------------" << endl;
    cout << "WELCOME TO THE RIGHT TRIANGLE TRUTH OR NOT CALCULATOR" << endl;
    cout << "-----------------------------------------------------\n\n";

    // Ask the user for all three sides of the  triangle
    cout << "Enter side A: ";
    cin >> sideA;
    cout << endl;

    cout << "Enter side B: ";
    cin >> sideB;
    cout << endl;

    cout << "Enter side C: ";
    cin >> sideC;
    cout << endl;

    // Read the inputs back to the user
    cout << "You entered:"
         << "\nside A: " << sideA << " : " << pow(sideA, 2.0)
         << "\nside B: " << sideB << " : " << pow(sideB, 2.0)
         << "\nside C: " << sideC << " : " << pow(sideC, 2.0)
         << "\n\n";

    // 2 short sides raised to the power of 2
    // And added together, left side of Pythagorean Theorem
    // a^2 + b^2
    double shortSidesSquaredAndAdded = pow(sideA, 2.0) + pow(sideB, 2.0);
    // Right side of Pythagorean Theorem
    // = c^2
    double sideCSquared = pow(sideC, 2.0);

    // Check if this is a right triangle
    if (shortSidesSquaredAndAdded == sideCSquared)
    {
        // Show the results using a if statement
        cout << "RESULTS: " << shortSidesSquaredAndAdded << " = " << sideCSquared << "\n\n";
        cout << "--------------" << endl;
        cout << "RIGHT TRIANGLE" << endl;
        cout << "--------------\n\n";
    }
    else
    {
        // Show the results for not a right triangle
        cout << "RESULTS: " << shortSidesSquaredAndAdded << " = " << sideCSquared << "\n\n";
        cout << "--------------------" << endl;
        cout << "NOT A RIGHT TRIANGLE" << endl;
        cout << "--------------------\n\n";
    }

    // Variable to hold the character Y or N
    char yesOrNo;

    // Ask the user if they would like to enter another set of numbers
    cout << "Enter another triangle? (Y/N)" << endl;
    cin >> yesOrNo;
    cout << endl;

    // if statement checking for user input
    if (yesOrNo == 'Y' || yesOrNo == 'y')
    {
        return main();
    }
    else
    {
       exit(0);
    }


    return 0;
}
