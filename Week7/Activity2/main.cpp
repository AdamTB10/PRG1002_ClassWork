// librarys and namespaces
#include <iostream>
#include <iomanip>
using namespace std;

// declaring functions
void calculateChange(double payment, double price);

// main function
int main () {
    // variable declarations and definitions
    const double DRINK_PRICE = 1.6;
    double totalPayment = 0.0;
    double inputAmount = 0.0;
    int drinkChoice;

    cout << fixed << setprecision(2);

    // get money from the user until total is enough
    while (totalPayment <= DRINK_PRICE) {
        cout << "Please enter note or coin (0.05, 0.1, 0.2, 0.5, 1, 2, 5, 10): ";
        cin >> inputAmount;
        totalPayment += inputAmount;
    }

    // show drink options
    cout << "1. Coca Cola" << endl;
    cout << "2. Sprite" << endl;
    cout << "3. Fanta" << endl;
    cout << endl;
    cout << "Select drink: ";
    cin >> drinkChoice;
    cout << endl;

    // calculate and display change
    calculateChange(totalPayment, DRINK_PRICE);

    return 0;
}

// function definitions
void calculateChange(double payment, double price) {
    // declaring and defining variables and arrays
    double change = payment - price;
    double coinsAndNotes[8] = {10, 5, 2, 1, 0.5, 0.2, 0.1, 0.05};
    double countOfCoinOrNote [8] = {0};

    // calculating change
    for (int i = 0; i < 8; i++) {
        countOfCoinOrNote[i] = int(change / coinsAndNotes[i]);
        change -= countOfCoinOrNote[i] * coinsAndNotes[i];

        // rounding to 2 decimal places
        change = ((int)(change * 100 + 0.5)) / 100.0;
    }

    // display out in the console
    cout << "$10 note: " << countOfCoinOrNote[0] << endl;
    cout << "$5 note: " << countOfCoinOrNote[1] << endl;
    cout << "$2 coin: " << countOfCoinOrNote[2] << endl;
    cout << "$1 coin: " << countOfCoinOrNote[3] << endl;
    cout << "50c coin: " << countOfCoinOrNote[4] << endl;
    cout << "20c coin: " << countOfCoinOrNote[5] << endl;
    cout << "10c coin: " << countOfCoinOrNote[6] << endl;
    cout << "5c coin: " << countOfCoinOrNote[7] << endl;
}