/*
    This program will print out the name of the color based on the input from the user, and the program will end when the user inputs Q or q.
*/

#include <iostream>

using namespace std;

int main() {
    char c = ' ';

    while (true) {
        cout << "--- Input Q to end the program ---" << endl;
        cout << "Please input the first letter of your favorite colour: ";
        cin >> c;

        if (c == 'q' || c == 'Q') {
            cout << "Program ended." << endl;
            break;
        }

        if (c == 'R' || c == 'r') {
            cout << "Your favorite colour is Red!" << endl;
        } else if (c == 'G' || c == 'g') {
            cout << "Your favorite colour is Green!" << endl;
        } else if (c == 'Y' || c == 'y') {
            cout << "Your favorite colour is Yellow!" << endl;
        } else if (c == 'B' || c == 'b') {
            cout << "Your favorite colour is Blue!" << endl;
        } else if (c == 'P' || c == 'p') {
            cout << "Your favorite colour is Pink!" << endl;
        } else {
            cout << "Invalid input, please try again." << endl;
            continue;
        }
    }

    return 0;
}