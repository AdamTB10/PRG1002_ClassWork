#include <iostream>
using namespace std;

// Declare the function with default parameters
int sumIntegers(int num1 = 0, int num2 = 0, int num3 = 0, int num4 = 0, int num5 = 0);

int main () {
    // Declare an array to hold up to 5 integers
    int nums[5] = {0};

    // Declare a variable to hold the number of integers to sum
    int numCount;

    // Prompt the user for the number of integers to sum
    cout << "How many integers would you like to sum (2-5)? ";
    cin >> numCount;

    // Ask the user to input the integers based on how many they want to sum
    for (int i = 0; i < numCount; i++) {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> nums[i];
    }

    // Call the function to sum the integers and display the result
    cout << "The sum is: " << sumIntegers(nums[0], nums[1], nums[2], nums[3], nums[4]) << endl;
}

// Define the function to sum up to 5 integers
int sumIntegers(int num1, int num2, int num3, int num4, int num5) {
    return num1 + num2 + num3 + num4 + num5;
}