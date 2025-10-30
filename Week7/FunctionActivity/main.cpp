#include <iostream>
using namespace std;

float celsiusToFahrenheit (float celsius) {
    return celsius * 9/5 + 32;
}

int main () {
    float mon, tue, wed, thu, fri, sat, sun;
    float allTemps[7];

    cout << "Please enter temperatures for each day in celsius. \n";

    cin >> mon >> tue >> wed >> thu >> fri >> sat >> sun;
    allTemps[0] = celsiusToFahrenheit(mon);
    allTemps[1] = celsiusToFahrenheit(tue);
    allTemps[2] = celsiusToFahrenheit(wed);
    allTemps[3] = celsiusToFahrenheit(thu);
    allTemps[4] = celsiusToFahrenheit(fri);
    allTemps[5] = celsiusToFahrenheit(sat);
    allTemps[6] = celsiusToFahrenheit(sun);

    // Print out temperatures in fahrenheit
    cout << "Temperatures for the week in fahrenheit: \n";
    cout << "Monday: " << allTemps[0] << " \n";
    cout << "Tuesday: " << allTemps[1] << " \n";
    cout << "Wednesday: " << allTemps[2] << " \n";
    cout << "Thursday: " << allTemps[3] << " \n";
    cout << "Friday: " << allTemps[4] << " \n";
    cout << "Saturday: " << allTemps[5] << " \n";
    cout << "Sunday: " << allTemps[6] << " \n";

    return 0;
}



