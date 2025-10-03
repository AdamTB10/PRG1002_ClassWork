/*
    This program will output "you are enrolled" when the user inputs "y" or "Y"
*/

#include <iostream>
using namespace std;

int main() {
    bool enrolled = false;
    char c = ' ';

    cout << "Would you like to enrol?" << endl << "(Enter ""Y""/""N"")" << endl;
    cin >> c;

    if (c == 'y' || c == 'Y') {
        cout << "You are enrolled" << endl;
    } else if (c == 'n' || c == 'N') {
        cout << "You are not enrolled" << endl;
    } else {
        cout << "You did not enter a valid response" << endl;
    }

    return 0;
}