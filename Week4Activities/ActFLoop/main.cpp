/*
    This program will print my name 7 times, and print values from 1 to 100
*/

#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 7; i++) {
        cout << "My name Adam" << endl;
    }

    for (int j = 1; j <= 100; j+= 2) {
        cout << j << endl;
    }
    
    return 0;
}