#include <iostream>
using namespace std;

// Declare overloaded myPower functions
int myPower(int base, int exponent);
long myPower(long base, int exponent);
float myPower(float base, int exponent);
double myPower(double base, int exponent);

int main () {
    // User input for base type and values
    int choice;
    cout << "Choose base type: " << endl;
    cout << "1. int" << endl;
    cout << "2. long" << endl;
    cout << "3. float" << endl;
    cout << "4. double" << endl;
    cin >> choice;

    int exponent;

    // Handle user choice and call appropriate myPower function
    if (choice == 1) {
        int base;
        cout << "Enter base (int): ";
        cin >> base;
        cout << "Enter exponent (int): ";
        cin >> exponent;
        cout << "Result: " << myPower(base, exponent) << endl;
    } else if (choice == 2) {
        long base;
        cout << "Enter base (long): ";
        cin >> base;
        cout << "Enter exponent (int): ";
        cin >> exponent;
        cout << "Result: " << myPower(base, exponent) << endl;
    } else if (choice == 3) {
        float base;
        cout << "Enter base (float): ";
        cin >> base;
        cout << "Enter exponent (int): ";
        cin >> exponent;
        cout << "Result: " << myPower(base, exponent) << endl;
    } else if (choice == 4) {
        double base;
        cout << "Enter base (double): ";
        cin >> base;
        cout << "Enter exponent (int): ";
        cin >> exponent;
        cout << "Result: " << myPower(base, exponent) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    // End of program
    return 0;
}

// Define overloaded myPower functions
int myPower(int base, int exponent) {
    int result = 1;
    bool negativeExponent = exponent < 0;
    if (negativeExponent == true) {
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }

    if (negativeExponent == true) {
        // // For int base with negative exponent, return 0 as int cannot represent fractional results
        return 0; 
    } else {
        return result;
    }
}

long myPower(long base, int exponent) {
    long result = 1;
    bool negativeExponent = exponent < 0;
    if (negativeExponent == true) {
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }

    if (negativeExponent == true) {
        // For long base with negative exponent, return 0 as long cannot represent fractional results
        return 0;
    } else {
        return result;
    }
}

float myPower(float base, int exponent) {
    float result = 1;
    bool negativeExponent = exponent < 0;
    if (negativeExponent == true) {
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }

    if (negativeExponent == true) {
        return 1 / result;
    } else {
        return result;
    }
}

double myPower(double base, int exponent) {
    double result = 1;
    bool negativeExponent = exponent < 0;
    if (negativeExponent == true) {
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }

    if (negativeExponent == true) {
        return 1 / result;
    } else {
        return result;
    }
}