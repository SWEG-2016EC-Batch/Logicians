#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, reverse_Number = 0, reminder, product = 1;
    int first, last, swapped_num;
    int strongSum = 0;
    int counter = 0;
    int digitFrequency[10] = {0}; 
    int choice;
    int middle_part; 
    int sum_of_divisors; 

    cout << "Enter the number: ";
    cin >> number;

    int org_num = number;

    if (number == 0) {
        cout << "You entered 0" << endl;
        digitFrequency[0] = 1; 
        return 0;
    }

    last = number % 10;

    
    int temp_number = org_num;
    while (temp_number != 0) {
        reminder = temp_number % 10;
        digitFrequency[reminder]++; 
        temp_number /= 10;
    }

    cout << "Menu:\n";
    cout << "1. Reverse the number\n";
    cout << "2. Count the number of digits\n";
    cout << "3. Product of even digits\n";
    cout << "4. First and last digit and their sum\n";
    cout << "5. Swap first and last digit\n";
    cout << "6. Check if palindrome\n";
    cout << "7. Strong number\n";
    cout << "8. Perfect number\n";
    cout << "9. Digit frequency table\n";
    cout << "10. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            // Reverse the number
            temp_number = org_num; 
            reverse_Number = 0; 
            while (temp_number != 0) {
                reminder = temp_number % 10;
                temp_number /= 10;
                reverse_Number = (reverse_Number * 10) + reminder;
            }
            cout << "The reverse of " << org_num << " is " << reverse_Number << endl;
            break;

        case 2:
            // Count the number of digits
            temp_number = org_num;
            counter = 0; 
            while (temp_number != 0) {
                temp_number /= 10;
                counter++;
            }
            cout << "Number of digits in " << org_num << " is " << counter << " digits\n";
            break;

        case 3:
            // Product of even digits
            product = 1; 
            temp_number = org_num;
            while (temp_number != 0) {
                reminder = temp_number % 10;
                if (reminder % 2 == 0) {
                    product *= reminder;
                }
                temp_number /= 10;
            }
            cout << "The product of the even numbers is " << product << endl;
            break;

        case 4:
            // First and last digit and their sum
            first = org_num;
            while (first >= 10) {
                first /= 10;
            }
            cout << "The first digit: " << first << endl;
            cout << "The last digit: " << last << endl;
            cout << "The sum of the first and the last digit is " << (first + last) << endl;
            break;

        case 5:
            // Swap the first and last digits
            temp_number = org_num;
            counter = 0; 
            while (temp_number != 0) {
                temp_number /= 10;
                counter++;
            }
            middle_part = (org_num % (int)pow(10, counter - 1)) / 10;
            swapped_num = last * pow(10, counter - 1) + middle_part * 10 + first;
            cout << "The number after swapping the first and last digits: " << swapped_num << endl;
            break;

        case 6:
            // Check if the original number is equal to the reversed number
            temp_number = org_num; 
            reverse_Number = 0; 
            while (temp_number != 0) {
                reminder = temp_number % 10;
                reverse_Number = (reverse_Number * 10) + reminder;
                temp_number /= 10;
            }
            if (org_num == reverse_Number) {
                cout << org_num << " is a palindrome." << endl;
            } else {
                cout << org_num << " is not a palindrome." << endl;
            }
            break;

        case 7:
            // Strong number calculation
            temp_number = org_num; 
            strongSum = 0; 
            while (temp_number > 0) {
                reminder = temp_number % 10;
                strongSum += factorial(reminder);
                temp_number /= 10;
            }
            if (strongSum == org_num) {
                cout << org_num << " is a Strong number." << endl;
            } else {
                cout << org_num << " is not a Strong number." << endl;
            }
            break;

        case 8:
            // Check if the number is a Perfect number
            sum_of_divisors = 0; 
            for (int i = 1; i <= org_num / 2; i++) {
                if (org_num % i == 0) {
                    sum_of_divisors += i;
                }
            }
            if (sum_of_divisors == org_num) {
                cout << org_num << " is a Perfect number." << endl;
            } else {
                cout << org_num << " is not a Perfect number." << endl;
            }
            break;

        case 9:
            // Print the frequency of each digit in table format
            cout << "\nDigit Frequency Table:\n";
            cout << "Digit\tFrequency\n";
            cout << "----------------\n";
            for (int i = 0; i < 10; i++) {
                if (digitFrequency[i] > 0) {
                    cout<<" " << i << "       " << digitFrequency[i] << endl;
                }
            }
            break;

        case 10:
            // Exit
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
