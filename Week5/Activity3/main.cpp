#include <iostream>

using namespace std;

int main() {
    // declare and initialise two integer variables i1 and i2
    int i1 = 4;
    int i2 = 8;
    
    // no conversion, calculate i1 / i2 and print the result.
    cout << "No conversion:" << endl;
    cout << i1 / i2 << endl;


    // convert i1 to a double, calculate i1 / i2 and print the result.
    cout << "Converted i1:" << endl;
    cout << double(i1) / i2 << endl;

    // convert i2 to a double, calculate i1 / i2 and print the result.
    cout << "Converted i2:" << endl;
    cout << i1 / double(i2) << endl;

    // calculate i1 / i2, convert the result to double and print the result.
    cout << "Converted result:" << endl;
    cout << double(i1 / i2) << endl;    


    return 0;
}