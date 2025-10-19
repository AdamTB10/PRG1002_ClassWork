/*
    Take an input from the user to define a circle's radius. Then calculate the circumference and output to the user
*/

#include <iostream>
#include <iomanip>
#define PI 3.141592653589793238

using namespace std;

int main() {
    // declare variables
    float radius = 0;
    float circumference = 0;

    // prompt user to input the radius
    cout << "Please enter a radius: ";
    cin >> radius;

    // calculate the circumference of the circle
    circumference = PI * radius * 2;

    // output the result
    cout << fixed << setprecision(5);
    cout << "The circumference of the circle is: " << circumference << endl;
}