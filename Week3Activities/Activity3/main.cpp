/*
    This program will find the minimum of 3 numbers input by the user.
*/

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2, num3;

    // Initialize variables
    num1 = num2 = num3 = 0;

    // Prompt user to input 3 numbers
    cout << "Enter 3 numbers: " << endl;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    cout << "Number 3: ";
    cin >> num3;

    // Find the minimum of the 3 numbers
    int minNum = num1;

    if (num2 < minNum) {
        minNum = num2;
    }
    if (num3 < minNum) {
        minNum = num3;
    }

    // Output the minimum number back to the user
    cout << "The minimum number is: " << minNum << endl;
}