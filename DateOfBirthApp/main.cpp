/*
    This app is a simple program to output date of birth
*/

// Include input/output library and string library
#include <iostream>
#include <string>

// Specify name space so we don't need to use inline specification
using namespace std;

// Start the main function, which is the entry point for the program
int main() {
    // delcare variable date as a string type
    string date;

    // prompt the user for their birthday
    cout << "What is your birthday? [DD/MM/YYY]... \n";

    // collect input from the user
    getline(cin, date);

    // prints inputted date
    cout << "Your birthday is: " << date << "\n";

    // prompt user for an input so the console window stays open
    cin.get();

    return 0;
}