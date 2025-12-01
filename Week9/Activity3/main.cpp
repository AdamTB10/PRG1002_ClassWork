/*
    This program will get the user to input three lengths (a, b, c), then calculates the area of the triangle
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // declare variables
    double a = 0.00;
    double b = 0.00;
    double c = 0.00;
    
    double halfOfPerimeter = 0.00;
    double area = 0.00;

    // get user to input lengths
    cout << "Enter the first side length (a): ";
    cin >> a;

    cout << "Enter the second side length (b): ";
    cin >> b;
    
    cout << "Enter the third side length (c): ";
    cin >> c;

    // calculate the area
    halfOfPerimeter = (a + b + c) / 2;

    area = sqrt(halfOfPerimeter * (halfOfPerimeter - a) * (halfOfPerimeter - b) * (halfOfPerimeter - c));

    // output the area
    cout << "The area of the inputted triangle: " << area;

    return 0;
}