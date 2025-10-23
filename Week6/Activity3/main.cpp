/*
    This program will calculate the tax of employees based on their monthly salaries and print out their names along with the calculated tax.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    // Declare two parallel arrays, one for employee names and one for their salaries
    string employeeNames[3] = {"John", "Peter", "Sally"};
    double employeeSalaries[3] = {2450.00, 2750.50, 1500.75};

    // Declare array to store calculated taxes
    double employeeTaxes[3];
    
    // Declare variable for number of employees
    int numOfEmployees = 3;

    // Declare variable for taxable income
    float taxableIncome;

    // Calculate yearly income for each employee
    for (int i = 0; i < numOfEmployees; i++) {
        employeeSalaries[i] = employeeSalaries[i] * 12;
    }

    // Calculate tax for each employee 
    for (int i = 0; i < numOfEmployees; i++) {
        if (employeeSalaries[i] >= 18200) {
            taxableIncome = employeeSalaries[i] - 18200;
            employeeTaxes[i] = taxableIncome * 0.19;
        } else {
            employeeTaxes[i] = 0;           
        }
    }

    // Print each employee's name with their calculated tax
    cout << fixed << setprecision(2);
    for (int i = 0; i < numOfEmployees; i++) {
        cout << "Employee: " << employeeNames[i] << ", Tax: $" << employeeTaxes[i] << endl;
    }

    return 0;
}