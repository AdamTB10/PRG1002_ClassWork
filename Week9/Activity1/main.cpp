/*
    This program will ask the user for a start and end point, and then calculate the mid point, rounding it down to the nearest whole number.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    // declare variables
    double startPosition = 0.00;
    double endPosition = 0.00;
    int middlePosition = 0.00;

    // get user inputs for start and end position
    cout << "Please enter a start position: ";
    cin >> startPosition;
    
    cout << "Please enter a final position: ";
    cin >> endPosition;

    // calculate the mid point and round down to nearest integer
    middlePosition = floor((startPosition + endPosition) / 2);

    // output the result
    cout << "The middlemost position is: " << middlePosition;

    return 0;
}