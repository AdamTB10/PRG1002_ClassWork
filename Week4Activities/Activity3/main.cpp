/*
    This program will get a number from the user and decrement it by 0.25 as long as it's still positive, using a do while loop.
*/

#include <iostream>
using namespace std;

int main () {
    float num = 0.00;

    cout << "Please input a number: ";
    cin >> num;

    do {
        cout << num << endl;
        num -= 0.25;
    } while (num >= 0);
    
    return 0;
}