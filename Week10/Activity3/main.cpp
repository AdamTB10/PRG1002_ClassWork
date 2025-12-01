/*
    This program will:
        1. Get the user to enter a string
        2. Check if the string is a palindrome
        3. Outputs whether it it a palindrome
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // declare variables
    string word;
    string reversedWord;

    // get the user to input a string
    cout << "Please enter a word: ";
    cin >> word;

    // reverse the entered word
    reversedWord = word;

    reverse(reversedWord.begin(), reversedWord.end());

    // check if a palindrome and output the result
    if (word == reversedWord) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}