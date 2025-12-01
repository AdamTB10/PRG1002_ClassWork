/*
    This program will:
        1. Get the user to a string
        2. Change the capitalization of each letter
        3. Output the result
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main () {
    // Declare variables
    string input;

    // Get string from user
    cout << "Enter in a string: ";
    getline(cin, input);

    // Swap lower-case to upper-case and upper-case to lower-case
    for (int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) {
            input[i] = tolower(input[i]);
        } else if (islower(input[i])) {
            input[i] = toupper(input[i]);
        }
    }

    // Output the changed string
    cout << "Output: " << input;

    return 0;
}