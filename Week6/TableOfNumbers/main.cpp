/*
    This program makes a 2 dimensional array 3 rows by 2 columns, 
    accept inputs from the user to fill the array, 
    then displays the 2D array as a list of rows and columns.
*/

#include <iostream>
using namespace std;

int main () {
    // Declare a 2 dimensional array with 3 rows and 2 columns
    int numbers[3][2] = {};

    // Prompt the user to enter values to fill the array
    // Use a loop
    cout << "Please enter 6 numbers to fill a 3x2 array: " << endl;
    for (int row_index = 0; row_index < 3; row_index++) {
        cout << "Row" << (row_index + 1) << endl;

        // Get value for col1
        cout << "Col 1: ";
        cin >> numbers[row_index][0];

        // get value for col2
        cout << "Col 2: ";
        cin >> numbers[row_index][1];
    }

    // Display the 2 dimensional array as a list of rows and columns
    // Use a loop 
    cout << endl << "The 2 dimensional array you entered is: " << endl;
    for (int row_index = 0; row_index < 3; row_index++) {
        // Output the value for col1
        cout << endl << "Row " << (row_index + 1) << " Col 0: " << numbers[row_index][0];
        
        // Output the value for col2
        cout << endl << "Row " << (row_index + 1) << " Col 1: " << numbers[row_index][1];
    }

    return 0;
}