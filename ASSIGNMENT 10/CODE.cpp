#include <iostream>
using namespace std;

// This function checks the temperature.
// If it is outside the allowed range, it THROWS an exception.
void checkTemperature(int temp) {
    int minTemp = 0;      // lowest allowed temperature
    int maxTemp = 100;    // highest allowed temperature

    if (temp < minTemp || temp > maxTemp) {
        // throw sends an error signal to the nearest matching catch block
        throw temp;       // we throw the invalid value itself (type: int)
    }

    // This line runs only if no exception was thrown
    cout << "Temperature " << temp << " is within the safe range." ;
}

int main() {
    int temp;
    cout << "Enter temperature (allowed range 0 to 100): ";
    cin >> temp;

    // try block: put the code that might cause an error here
    try {
        checkTemperature(temp);
    }
    // catch block: runs only if an int was thrown inside the try block
    catch (int value) {
        cout << "Exception: Temperature " << value << " is outside the allowed range!" ;
    }

    return 0;
}
