/*
    This program will:
        1. Ask the user to enter a month number (1-12).
        2. Use an enumeration (enum) to define the seasons.
        3. Determine which season the entered month belongs to.
        4. Output the corresponding season to the user.

        Season ranges:
            Spring: January (1) to March (3)
            Summer: April (4) to June (6)
            Autumn: July (7) to September (9)
            Winter: October (10) to December (12)
*/

#include <iostream>

using namespace std;

// Define enum for seasons, using starting month values
enum Season {
    Spring = 1,
    Summer = 4,
    Autumn = 7,
    Winter = 10
};

int main() {
    // Declare and Define variables
    int month;

    // Prompt the user for a month
    cout << "Enter a month (1-12): ";
    cin >> month;

    // Validate input (is between 1 and 12)
    if (month < 1 || month > 12) {
        cout << "Invalid month number!";
        return 1;
    }

    // Determine season and output result
    if (month < Summer) {
        cout << "Output: Spring";
    } else if (month < Autumn) {
        cout << "Output: Summer";
    } else if (month < Winter) {
        cout << "Output: Autumn";
    } else {
        cout << "Output: Winter";
    }

    return 0;
}