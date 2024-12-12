## Program Analysis

#### Input:
1. **Number Entry**
   - Input validation checks if the entered number is zero.
2. **Menu Choice**
#### Process:
1. **Digit Frequency Calculation:**
   - Calculate the frequency of each digit (0-9) in the entered number and store it in an array.
   
2. **Menu Display **
   - Display a menu with various options for the user to choose from:
     1. **Reverse the number:** Reverse the digits of the entered number.
     2. **Count the number of digits:** Count the total number of digits in the entered number.
     3. **Product of even digits:** Calculate the product of all even digits in the entered number.
     4. **First and last digit and their sum:** Display the first and last digit of the entered number and their sum.
     5. **Swap first and last digit:** Swap the first and last digits of the entered number.
     6. **Check if palindrome:** Check if the entered number is a palindrome.
     7. **Strong number:** Check if the entered number is a strong number (sum of factorials of its digits is equal to the number itself).
     8. **Perfect number:** Check if the entered number is a perfect number (sum of its proper divisors equals the number itself).
     9. **Digit frequency table:** Display the frequency of each digit in the entered number.
     10. **Exit:** Exit the program.
   
3. **Based on the User's Choice:**
   1. **Reverse the Number:**
   2. **Count the Number of Digits:**
   3. **Product of Even Digits:**
   4. **First and Last Digit and Their Sum:**
   
   5. **Swap First and Last Digit:**
   6. **Check if Palindrome:**
   7. **Strong Number:**
   8. **Perfect Number:**
   9. **Digit Frequency Table:**

#### Output:
- **Based on User's Choice:**
  - **Reversed Number:** The reversed number.
  - **Number of Digits:** The total number of digits.
  - **Product of Even Digits:** The product of all even digits.
  - **First and Last Digit and Their Sum:** The first and last digits and their sum.
  - **Swapped Number:** The number with the first and last digits swapped.
  - **Palindrome Check:** Whether the number is a palindrome.
  - **Strong Number Check:** Whether the number is a strong number.
  - **Perfect Number Check:** Whether the number is a perfect number.
  - **Digit Frequency Table:** The frequency of each digit in a table format.
  - **Exit Message:** "Exiting..." message upon exiting the program.


## Pseudocode

1. **Start**
   - Declare `number, reverse_Number, reminder, product, first, last, swapped_num, strongSum, counter, digitFrequency[10], choice, middle_part, sum_of_divisors`

2. **Input Number:**
   - Read `number`
   - If `number` equals 0:
     - Print "You entered 0"
     - Set `digitFrequency[0]` to 1
     - End the program
     - 
3. **Initialize Variables:**
   - Set `org_num` to `number`
   - Set `last` to `number % 10`

4. **Calculate Digit Frequency:**
   - While `temp_number` (initialized to `org_num`) is not equal to 0:
     - Set `reminder` to `temp_number % 10`
     - Increment `digitFrequency[reminder]`
     - Set `temp_number` to `temp_number / 10`

5. **Display Menu:**
   - Print the menu options:
     1. Reverse the number
     2. Count the number of digits
     3. Product of even digits
     4. First and last digit and their sum
     5. Swap first and last digit
     6. Check if palindrome
     7. Strong number
     8. Perfect number
     9. Digit frequency table
     10. Exit
   - Print "Enter your choice: "
   - Read `choice`

6. **Execute Based on Choice:**
   - **Case 1: Reverse the Number**
     - Set `temp_number` to `org_num`
     - Set `reverse_Number` to 0
     - While `temp_number` is not equal to 0:
       - Set `reminder` to `temp_number % 10`
       - Set `temp_number` to `temp_number / 10`
       - Set `reverse_Number` to `(reverse_Number * 10) + reminder`
     - Print "The reverse of `org_num` is `reverse_Number`"

   - **Case 2: Count the Number of Digits**
     - Set `temp_number` to `org_num`
     - Set `counter` to 0
     - While `temp_number` is not equal to 0:
       - Set `temp_number` to `temp_number / 10`
       - Increment `counter`
     - Print "Number of digits in `org_num` is `counter` digits"

   - **Case 3: Product of Even Digits**
     - Set `product` to 1
     - Set `temp_number` to `org_num`
     - While `temp_number` is not equal to 0:
       - Set `reminder` to `temp_number % 10`
       - If `reminder % 2` equals 0:
         - Set `product` to `product * reminder`
       - Set `temp_number` to `temp_number / 10`
     - Print "The product of the even numbers is `product`"

   - **Case 4: First and Last Digit and Their Sum**
     - Set `first` to `org_num`
     - While `first` is greater than or equal to 10:
       - Set `first` to `first / 10`
     - Print "The first digit: `first`"
     - Print "The last digit: `last`"
     - Print "The sum of the first and the last digit is `first + last`"

   - **Case 5: Swap First and Last Digit**
     - Set `temp_number` to `org_num`
     - Set `counter` to 0
     - While `temp_number` is not equal to 0:
       - Set `temp_number` to `temp_number / 10`
       - Increment `counter`
     - Set `middle_part` to `((org_num % (10 ^ (counter - 1))) / 10)`
     - Set `swapped_num` to `last * (10 ^ (counter - 1)) + middle_part * 10 + first`
     - Print "The number after swapping the first and last digits: `swapped_num`"

   - **Case 6: Check if Palindrome**
     - Set `temp_number` to `org_num`
     - Set `reverse_Number` to 0
     - While `temp_number` is not equal to 0:
       - Set `reminder` to `temp_number % 10`
       - Set `reverse_Number` to `(reverse_Number * 10) + reminder`
       - Set `temp_number` to `temp_number / 10`
     - If `org_num` equals `reverse_Number`:
       - Print "`org_num` is a palindrome."
     - Else:
       - Print "`org_num` is not a palindrome."

   - **Case 7: Strong Number**
     - Set `temp_number` to `org_num`
     - Set `strongSum` to 0
     - While `temp_number` is greater than 0:
       - Set `reminder` to `temp_number % 10`
       - Set `strongSum` to `strongSum + factorial(reminder)`
       - Set `temp_number` to `temp_number / 10`
     - If `strongSum` equals `org_num`:
       - Print "`org_num` is a Strong number."
     - Else:
       - Print "`org_num` is not a Strong number."

   - **Case 8: Perfect Number**
     - Set `sum_of_divisors` to 0
     - For `i` from 1 to `org_num / 2`:
       - If `org_num % i` equals 0:
         - Set `sum_of_divisors` to `sum_of_divisors + i`
     - If `sum_of_divisors` equals `org_num`:
       - Print "`org_num` is a Perfect number."
     - Else:
       - Print "`org_num` is not a Perfect number."

   - **Case 9: Digit Frequency Table**
     - Print "\nDigit Frequency Table:"
     - Print "Digit\tFrequency"
     - Print "----------------"
     - For `i` from 0 to 9:
       - If `digitFrequency[i]` is greater than 0:
         - Print `i\t  digitFrequency[i]`

   - **Case 10: Exit**
     - Print "Exiting..."

   - **Default: Invalid Choice**
     - Print "Invalid choice!"

7. **End**

# Flow chart

