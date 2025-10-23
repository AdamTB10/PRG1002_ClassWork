/*
    This is a program that accepts 10 number inputs from a user, stores them in an array, 
    then accepts 1 final number input and counts how many times that number appears in the array.
*/

#include <iostream>
using namespace std;

int main () {
    // Declare an array to hold 10 numbers
    int numbers[10] = {};

    // Prompt the user to enter 10 numbers and store them in the array
    cout << "Please enter 10 numbers: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << ", ";
    }

    cout << endl;

    // Prompt the user to enter a final number to search for
    int NumberToCount;

    cout << "Please enter a number to count: ";
    cin >> NumberToCount;

    // Count how many times the final number appears in the array
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == NumberToCount) {
            count++;
        }
    }


    // Display the count to the user
    cout << "The number " << NumberToCount << " appears " << count << " times in the array." << endl;


    return 0;
}