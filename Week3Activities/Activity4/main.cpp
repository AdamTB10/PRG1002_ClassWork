/*
    This program will output a colour when the user inputs a corresponding color
*/

#include <iostream>
using namespace std;

int main() {
    // Declare and initialise variables
    char c = ' ';

    // Get user input
    cout << "What is the first letter of your favorite colour: ";
    cin >> c;

    // Check what colour was inputted and output the selected colour
    switch (c) {
        case 'r':
        case 'R':
            cout << "The colour picked by you is Red.";
            break;
        case 'g':
        case 'G':
            cout << "The colour picked by you is Green.";
            break;
        case 'y':
        case 'Y':
            cout << "The colour picked by you is Yellow.";
            break;
        case 'b':
        case 'B':
            cout << "The colour picked by you is Blue.";
            break;
        case 'p':
        case 'P':
            cout << "The colour picked by you is Pink.";
            break;
        default:
            cout << "Sorry, there's no registered colour for that letter.";
            break;
    }

    return 0;
}