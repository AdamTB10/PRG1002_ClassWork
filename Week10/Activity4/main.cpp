/*
    This program will
        1. Prompt the user to input a sentence
        2. Prompt the user to input a search string
        3. Count how many times the search strings is in the sentence
        4. Output the total number of occurrences
*/

#include <iostream>
#include <string>

using namespace std;


int main () {
    // Declare Variables
    string sentence;
    string searchStr;
    size_t position = 0;
    int count = 0;

    // Get sentence from the user
    cout << "Please enter in a sentence: ";
    getline(cin, sentence);

    // Get search string from the user
    cout << "Please enter is search sentence: ";
    getline(cin, searchStr);

    // Search for all insenses of searchStr in the sentence
    while ((position = sentence.find(searchStr, position)) != string::npos) {
        count++;
        position += searchStr.length();
    }

    // Output the result
    cout << "Found: " << searchStr << " " << count << " times in the sentence." << endl;

    return 0;
}