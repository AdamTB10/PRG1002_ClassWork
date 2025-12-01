/*
    This program will get 2 lengths (a and b) from the user, and then calculate the hypotenuse (c), and output that to the user. 
*/

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    // delcare variables
    float a = 0.00;
    float b = 0.00;
    float c = 0.00;

    // get a and b from the user
    cout << "Enter the first side length (a): ";
    cin >> a;

    cout << "Enter the second side length (b): ";
    cin >> b;
    // calculate c
    c = sqrt((a * a) + (b * b));

    // output c
    cout << "The hypotenuse is: " << c;

    return 0;
}