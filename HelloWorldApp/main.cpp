/*
    This app is a simple program to output a name from a user input
*/

// Include input/output library and string manipulation library
#include <iostream>
#include <string>

// Specifying the namespace to be used, to avoid inline specification
using namespace std;

int main() {
    // declare variable as a string type
    string name;

    // prompt the user to enter a name
    cout << "Please enter your Full name... \n";

    // collect the line of characters using cin from the user
    getline(cin, name);

    // prints a message with the name to the console
    cout << "Hello " << name << "\n";

    // prompt user for an input so that the console window stays open
    cin.get();

    
    return 0;
}