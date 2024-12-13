#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, first_digit, last_digit, remaining_digits, swapped_number, n;
    cout << "Enter the number\n";
    cin >> number;

    last_digit = number % 10;
   n = number;
    remaining_digits = log10(n);
    while (n >= 10) {
       n /= 10;
    }
    first_digit = n;
    swapped_number = last_digit * pow(10, remaining_digits) + (number % int(pow(10, remaining_digits))) - last_digit + first_digit;

    cout << "The original number is: " << number << endl;
    cout << "The number after swapping the first and last digits is: " << swapped_number << endl;

    return 0;
}
