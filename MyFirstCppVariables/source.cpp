/* 
    This small app is going to store employment information and output it to screen
*/

// Include the input output library
#include <iostream>

// Specify the namespace so we don't need to use inline specification
using namespace std;

// Start the main function, which is the entry point for the program
int main() {

    // Declare and init all variables
    int employee_number = 10;
    float employee_salary = 675.34;
    bool employee_status = true;
    char employee_marital_status = 'S';

    // print to screen
    cout << "Employee Number: " << employee_number << endl;
    cout << "Employee Salary: " << employee_salary << endl;
    cout << "Employee Status: " << employee_status << endl;
    cout << "Employee Marital Status: " << employee_marital_status << endl;

    // Keep the window open
    cin.get();

    return 0;
}