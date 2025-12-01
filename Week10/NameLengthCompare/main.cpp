#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare Variables
    string myFullName, friendFullName;
    int myNameLength, friendNameLength;

    // Get the user to input names
    cout << "Enter your full name: ";
    getline(cin, myFullName);

    cout << "Enter your friend's full name: ";
    getline(cin, friendFullName);

    // Get the names lengths
    myNameLength = myFullName.length();
    friendNameLength = friendFullName.length();

    // Check which name is longer and output the result
    if (myNameLength > friendNameLength) {
        cout << myFullName << " is longer than " << friendFullName << " by " << (myNameLength - friendNameLength) << endl;
    } else if (friendNameLength > myNameLength) {
        cout << friendFullName << " is longer than " << myFullName << " by " << (friendNameLength - myNameLength) << endl;
    } else {
        cout << "Both names are the same length!" << endl;
    }

    return 0;
}