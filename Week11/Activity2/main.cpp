/*
    This program will:
        1. Continuously ask the user to enter a character command.
        2. Map the character to an action using an enumeration.
        3. Print the action performed.
        4. Stop only when the user enters 'x'.

        Supported actions:
            l -> moved left
            r -> moved right
            f -> moved forward
            b -> moved backwards
            j -> jumped
            a -> attacked
            x -> exit
*/

#include <iostream>

using namespace std;

// Declare and Define enum for actions, each assigned to its corresponding character
enum Action {
    MoveLeft = 'l',
    MoveRight = 'r',
    MoveForward = 'f',
    MoveBack = 'b',
    Jump = 'j',
    Attack = 'a',
    Exit = 'x'
};


int main() {
    // Declare Variables
    char input;
    Action selectedAction;

    // Loop until user enters 'x'
    while (true) {
        cout << "Enter a command: ";
        cin >> input;

        // Convert the input into an action type
        selectedAction = static_cast<Action>(input);

        // Check what the action was, and outputs the relevant message
        switch (selectedAction) {
            case MoveLeft:
                cout << "You moved left." << endl;
                break;
            case MoveRight:
                cout << "You moved right." << endl;
                break;
            case MoveForward:
                cout << "You moved forward." << endl;
                break;
            case MoveBack:
                cout << "You moved back." << endl;
                break;
            case Jump:
                cout << "You jumped." << endl;
                break;
            case Attack:
                cout << "You attacked." << endl;
                break;
            case Exit:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid command!" << endl;
        }
    }

    return 0;
}