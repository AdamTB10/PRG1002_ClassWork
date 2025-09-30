/*
    Program to run the activities in week 2
*/

// include libraries (string manip, input output, input output manip, limits of data types)
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

// declare namespace
using namespace std;

// initialise main function
int main() {
    /* Activity 1 */
    // set and declare variable
    int n = 32;

    cout << "--- Activity 1 ---" << endl;
    // print output
    cout << "Output: " << n;   
    cout << endl;

    /* Activity 2 */
    // declare variables
    int a;
    int b;
    int c;
    int sum1;

    cout << "--- Activity 2 ---" << endl;
    // prompt and get user inputs
    cout << "Please input a whole number: ";
    cin >> a;
    cout << "Please input another whole number: ";
    cin >> b;
    cout << "Please input one last whole number: ";
    cin >> c;

    // add the user inputs
    sum1 = a + b + c;

    // print output
    cout << "Sum of the numbers you gave: " << sum1 << endl;  
    cout << endl;

    /* Activity 3 */
    // declare variables
    double x;
    double y;
    double sum2;

    cout << "--- Activity 3 ---" << endl;
    // prompt and get user inputs
    cout << "Please input any number (including decimals): ";
    cin >> x;
    cout << "Please input another number: ";
    cin >> y;

    // add the numbers
    sum2 = x + y;

    // print output, setting the output to 2 decimals places
    cout << "Sum of the numbers you gave: " << fixed << setprecision(2) << sum2 << endl;
    cout << endl;

    /* Activity 4 */
    // declare variables
    string first_name;
    string last_name;
    char first_name_initial;
    char last_name_initial;

    cout << "--- Activity 4 ---" << endl;
    // prompt the user
    cout << "Please, input your first and last name: ";

    // get the first and last name inputted
    cin >> first_name >> last_name;

    // get the first letter of the first and last name
    first_name_initial = first_name[0];
    last_name_initial = last_name[0];

    // print output
    cout << "Hello, " << first_name_initial << "." << last_name_initial << endl;

    // prompt the user
    cout << "Please press Enter to exit...";

    // remove leftover newlines from previous cin >>
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // get user input to close the program;
    cin.get();

    return 0;
}