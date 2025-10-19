#include <iostream>

using namespace std;

int main() {
    char x = 'a';
    // int y = int(x); // explicit type conversion from char to int
    int y = x; // implicit type conversion from char to int

    cout << "The ASCII value of " << x << " is " << y << endl;

    return 0;
}    