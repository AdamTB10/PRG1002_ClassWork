/*
    This program will get the users name, store it, and then print it out in reverse
*/

#include <iostream>
using namespace std;

int main() {
    // Declare array for name to be stored in
    char name[50];
    
    // Declare array to measure array length
    int length = 0;
    
    // Declare array to store reversed name
    char reversedName[50];

    // Prompt user to enter name
    cout << "Enter your name: ";
    cin >> name;

    // Print out the name the user entered
    cout << name << endl;

    // Get the number of letters the users name has
    while (name[length] != '\0') {
        length++;
    }

    // Store the name in reversed way in a new array
    for (int i = 0; i < length; i++) {
        reversedName[i] = name[length - 1 - i];
    }
    reversedName[length] = '\0';

    // Output reversed name
    cout << reversedName << endl;

    return 0;
}