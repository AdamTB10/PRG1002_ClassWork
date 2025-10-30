/*
    This program will have a function that finds the minimum number from a user input of three numbers.
*/

#include <iostream>
using namespace std;

int findMinimum(int num1, int num2, int num3) {
    int minNum = num1;

    if (num2 < minNum) {
        minNum = num2;
    }
    if (num3 < minNum) {
        minNum = num3;
    }

    return minNum;
}

int main() {
    int num1, num2, num3;
    cout << "Please enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Minimum number is: " << findMinimum(num1, num2, num3) << endl;
    
    return 0;
}