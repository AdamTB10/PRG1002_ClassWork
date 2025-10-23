/*
    This program will use two parallel arrays to store employee names and their monthly salaries,
    then prints each name with the matching salary.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // Create two parallel arrays, one for employee names and one for their salaries
    string employeeNames[3] = {"John", "Peter", "Sally"};
    double employeeSalaries[3] = {2450.00, 2750.50, 1500.75};

    // Declare variable for number of employees
    int numOfEmployees = 3;

    // Loop through the arrays to print each employee's name with their salary
    cout << fixed << setprecision(2);
    for (int i = 0; i < numOfEmployees; i++) {
        cout << "Employee: " << employeeNames[i] << ", Salary: $" << employeeSalaries[i] << endl;
    }

}