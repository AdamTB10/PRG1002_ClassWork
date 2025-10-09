/*
    This program will get a number from the user and then provide the first five multiples of that number.
*/

#include  <iostream>

using namespace std;

int main () {
    int num = 0;
    int multiple = 0;

    cout << "Please input a number: ";
    cin >> num;

    for (int i = 1; i <= 5; i++) {
        multiple = num * i;
        cout << "Multiple " << i << ": " << multiple << endl;
    }
}