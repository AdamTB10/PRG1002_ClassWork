/*
    This program will get the user to input a double.

    The double will then be explicitly converted to an integer.

    The program will output the original and converted value.
*/

#include <iostream>

using namespace std;

int main() {
    double original = 0.0;
    int converted = 0;

    cout << "Please enter a double that will be explicitly converted to an integer: ";
    cin >> original;

    converted = int(original);

    cout << "Value before conversion: ";
    cout << original << endl;
    cout << "Value after conversion: ";
    cout << converted << endl;

    return 0;
}