/*
    This program gets the user to input a size for a multiplication table, and the program outputs a multiplication table of that size.
*/

#include <iostream>
using namespace std;

int main () {
    int size = 0;

    cout << "Please enter a multiplication size (1-15): ";
    cin >> size;

    if (size < 1 || size > 15) {
        cout << "Invalid size! Please enter a number between 1 and 15." << endl;
        return 0;
    }

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}