/*
    This program will accept 2 input numbers from the user, and use implicit type conversion before adding them together.
*/

#include <iostream>

using namespace std;

int main() {
    int integerNum;
    float floatNum;
    float integerNumAsFloat;

    cout << "Please enter an integer: ";
    cin >> integerNum;

    cout << "Please enter a float: ";
    cin >> floatNum;

    integerNumAsFloat = integerNum;

    cout << "The sum, after converting is: " << integerNumAsFloat + floatNum << endl;

    return 0;
}