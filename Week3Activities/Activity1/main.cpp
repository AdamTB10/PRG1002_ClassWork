/*
    This program will check if 2 numbers are divisible. e.g. in Num1 divisible
*/

// Include the library to input and output data
#include <iostream>

// Specify the namespace so we don't need to use std:: all the time
using namespace std;

int main() {
    // Declare and initialise variables
    int Dividend = 0;
    int Divisor = 1;
    bool isDivisible = false;

    // Prompt the user to input 2 numbers
    cout << "Enter a number that will be the Dividend: ";
    cin >> Dividend;

    cout << "Enter a number that will be the Divisor: ";
    cin >> Divisor;

    // Conduct the comparison on the 2 numbers
    isDivisible = (Dividend % Divisor == 0);

    // Output the results: True if Num1 is divisible by Num2, False if not
    if (isDivisible) {
        cout << "It is divisible." << endl;
    } else {
        cout << "It is not divisible." << endl;
    }

    return 0;
}