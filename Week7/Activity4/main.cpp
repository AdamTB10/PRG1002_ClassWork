#include <iostream> 
using namespace std;

// Declare overloaded functions
int add (int num1, int num2);
double add (int num1, double num2);
double add (double num1, int num2);
double add (double num1, double num2);

int main() {
    // User input to choose which overloaded function to call
    int choice;
    cout << "Choose types to add: " << endl;
    cout << "1. int + int" << endl;
    cout << "2. int + double" << endl;
    cout << "3. double + int" << endl;
    cout << "4. double + double" << endl;
    cin >> choice;

    // Add two integers based on user choice 
    if (choice == 1) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Result: " << add(a, b) << endl;
    } else if (choice == 2) {
        int a;
        double b;
        cout << "Enter an integer and a double: ";
        cin >> a >> b;
        cout << "Result: " << add(a, b) << endl;
    } else if (choice == 3) {
        double a;
        int b;
        cout << "Enter a double and an integer: ";
        cin >> a >> b;
        cout << "Result: " << add(a, b) << endl;
    } else if (choice == 4) {
        double a, b;
        cout << "Enter two doubles: ";
        cin >> a >> b;
        cout << "Result: " << add(a, b) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
};

// Define overloaded functions
int add (int num1, int num2) {
    return num1 + num2;
};

double add (int num1, double num2) {
    return num1 + num2;
};

double add (double num1, int num2) {
    return num1 + num2;
};

double add (double num1, double num2) {
    return num1 + num2;
};
