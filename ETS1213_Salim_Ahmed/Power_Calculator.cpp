#include <iostream>
using namespace std;

int main() {
    float x, result = 1;
    int y, p; // We need p for the final output

    cout << "Enter the value of base: ";
    cin >> x;

    if (cin.fail()) {
        cout << "Invalid input for base. Please enter a number." << endl;
        return 1;
    }

    cout << "Enter the value of exponent: ";
    cin >> y;

    if (cin.fail()) {
        cout << "Invalid input for exponent. Please enter an integer." << endl;
        return 1;
    }

    p = y;

    if (y < 0) {
        y *= -1;
    }

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    if (p < 0) {
        result = 1 / result;
    } else if (p == 0) {
        result = 1;
    }

    cout << "The result of " << x << "^" << p << " is: " << result << endl;

    return 0;
}
