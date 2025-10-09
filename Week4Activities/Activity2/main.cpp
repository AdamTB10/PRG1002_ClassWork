/*
    This program gets a number from the user and decrements it by 0.25 as long as its a positive number.
*/

#include <iostream>
using namespace std;

int main () {
    float num = 0.00;

    cout << "Please input a number: ";
    cin >> num;

    while (num >= 0) {
        cout << num << endl;
        num -= 0.25;
    }

    return 0;
}