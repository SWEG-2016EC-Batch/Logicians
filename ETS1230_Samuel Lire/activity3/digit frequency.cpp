#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    
    long number;
    
    
    cout << "Enter an integer: \n";
    cin >> number;

    int frequency[10] = {0}; 

    number = abs(number);
    
    if (number == 0) {
        frequency[0] = 1;
    } else {
        while (number > 0) {
            int digit = number % 10; 
            frequency[digit]++;       
            number /= 10;             
        }
    }

    
  cout << "\nDigit Frequency Table:\n";
   cout << "-----------------------\n";
   cout << "Digit | Frequency\n";
   cout << "-----------------------\n";
    
    for (int i = 0; i < 10; ++i) {
    cout << "  " << i << "   |     " << frequency[i] << "\n";
    }
    
    return 0;
}
