/*
    This program will:
        1. Prompt the user to enter two whole numbers
        2. Prompt the user to choose whether to add or subtract
        3. Calculate the result
        4. Output the result
*/

#include <iostream>

using namespace std;

enum operations {
    Add = 1, 
    Subtract = 2
};

int main() {
    // Declare variables
    int num1, num2;
    int choice;
    int result;
    operations calculationType;

    // Prompt the user to enter two integers
    cout << "Please input the first number: ";
    cin >> num1;

    cout << "Please input the second number: ";
    cin >> num2;

    // Prompt the user to select an operator
    cout << "Please choose an operation:\n";
    cout << "1. Add\n2. Subtract\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    calculationType = static_cast<operations>(choice);

    // Calculate the result and output the result
    switch (calculationType) {
        case Add:
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case Subtract:
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}