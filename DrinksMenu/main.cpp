/*
    Simple drinks menu formatted nicely
*/

#include <iostream>
#include <iomanip>

using namespace std;

// declare and init variables

int main() {
    // declare and init local variables
    float coffee_price = 3.50;
    float tea_price = 3.00;

    cout << "Menu\n";
    cout.width(20);
    cout << "--------------------\n";
    cout << fixed << setprecision(2);
    cout.width(20);
    cout << left << "Item" << right << "Price\n";
    cout.width(20);
    cout << left << "Coffee" << right << coffee_price << "\n";
    cout.width(20);
    cout << left << "Tea" << right << tea_price << "\n";
}