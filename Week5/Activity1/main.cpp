/*
    Take an input from the user to define a circle's radius. Then calculate the area of the circle
*/

#include <iostream>
#include <iomanip>
#define PI 3.141592653589793238

using namespace std;

int main() {
    // Declare variables
    float radius = 0;
    float area = 0;

    // prompt the user to input the radius
    cout << "Please enter a radius: ";
    cin >> radius;

    // calculate the area of the circle
    area = PI * radius * radius;

    // output the result
    cout << fixed << setprecision(5);
    cout << "The area of the circle is: " << area << endl;

    return 0;
}