/*
    This program will:
        1. Get the user to input a sentence
        2. Get the user to input a character to search for
        3. Output the position of the character
*/

#include <iostream>
#include <string>

using namespace std;

int main () {
    // Declare variable
    string sentence;
    char searchChar;
    size_t position;

    // Prompt the user to input a sentence
    cout << "Please enter in a sentence: ";
    getline(cin, sentence);

    // Prompt the user to input the character to search for
    cout << "Please enter a character: ";
    cin >> searchChar;

    // Search for the character
    position = sentence.find(searchChar);

    // Check if a character was found, then output the result
    if (position != string::npos) {
        cout << "I found '" << searchChar << "' at position " << position << "."; 
    } else {
        cout << "Character '" << searchChar << "' not found in the sentence.";
    }

    return 0;
}