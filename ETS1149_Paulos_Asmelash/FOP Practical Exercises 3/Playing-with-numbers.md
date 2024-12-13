# Problem Analysis:

#### Input:
1. A **menu choice** (`menu`) to select the operation.
2. A **number** (`number`) for performing the chosen operation.

#### Process:
- Based on the user's menu choice:
  1. **Reverse of the Number**: Reverse the digits of the number using modular arithmetic and division.
  2. **Number of Digits**: Count digits by dividing the number repeatedly by 10.
  3. **Product of Even Digits**: Multiply all even digits in the number.
  4. **First and Last Digit**: Identify the first and last digit of the number.
  5. **Swap First and Last Digit**: Replace the first digit with the last and vice versa, reconstructing the number.
  6. **Palindrome**: Reverse the number and check if it's the same as the original.
  7. **Frequency of Each Digit**: Count occurrences of each digit (0–9).
  8. **Strong Number**: Calculate the sum of factorials of digits and compare it with the number.
  9. **Perfect Number**: Check if the sum of proper divisors equals the number.
  10. **Exit**: Quit the program.

#### Output:
- The result of the chosen operation:
  - **Reverse of the Number**: Displays the reversed number.
  - **Number of Digits**: Displays the total number of digits.
  - **Product of Even Digits**: Displays the product or a message if no even digits exist.
  - **First and Last Digit**: Displays the first and last digit.
  - **Swap First and Last Digit**: Displays the new number after swapping.
  - **Palindrome**: Displays whether the number is a palindrome.
  - **Frequency of Each Digit**: Displays the frequency of each digit (0–9).
  - **Strong Number**: Displays if the number is a strong number.
  - **Perfect Number**: Displays if the number is a perfect number.
  - **Exit**: Ends the program.
  # Pseudocode:
1. Start
2. Display the menu with options:
   - 1: Reverse of the number
   - 2: Number of digits
   - 3: Product of even digits
   - 4: First and last digit
   - 5: Swap first and last digit
   - 6: Palindrome
   - 7: Frequency of each digit
   - 8: Strong number
   - 9: Perfect number
   - 10: Exit
3. Prompt and read `menu` (the user's choice).
4. If `menu` is not 10, prompt and read the `number`.
5. Based on the `menu` option, execute the corresponding operation:
   - **Case 1: Reverse of the number**
     1. Initialize `reverse = 0`.
     2. While `number != 0`:
        - Compute `remain = number % 10`.
        - Update `reverse = reverse * 10 + remain`.
        - Update `number = number / 10`.
     3. Output `reverse`.
   - **Case 2: Number of digits**
     1. Initialize `count = 0`.
     2. While `number != 0`:
        - Update `number = number / 10`.
        - Increment `count`.
     3. Output `count`.
   - **Case 3: Product of even digits**
     1. Initialize `product = 1` and `hasEven = false`.
     2. While `number != 0`:
        - Compute `remain = number % 10`.
        - If `remain % 2 == 0`:
          - Update `product = product * remain`.
          - Set `hasEven = true`.
        - Update `number = number / 10`.
     3. If `hasEven == true`, output `product`; otherwise, output "No even digits."
   - **Case 4: First and last digit**
     1. Initialize `last = number % 10`.
     2. While `number != 0`:
        - Update `first = number % 10`.
        - Update `number = number / 10`.
     3. Output `first` and `last`.
   - **Case 5: Swap first and last digit**
     1. Extract `first` and `last` as in Case 4.
     2. Reconstruct the number with `first` and `last` swapped.
     3. Output the new number.
   - **Case 6: Palindrome**
     1. Reverse the number as in Case 1.
     2. If the reversed number equals the original, output "Palindrome"; otherwise, output "Not a palindrome."
   - **Case 7: Frequency of each digit**
     1. Initialize an array `freq[10]` with all elements as 0.
     2. While `number != 0`:
        - Compute `remain = number % 10`.
        - Increment `freq[remain]`.
        - Update `number = number / 10`.
     3. Output `freq` for each digit (0–9).
   - **Case 8: Strong number**
     1. Initialize `sum = 0`.
     2. For each digit in `number`:
        - Compute the factorial of the digit.
        - Add the factorial to `sum`.
     3. If `sum == originalNumber`, output "Strong number"; otherwise, output "Not a strong number."
   - **Case 9: Perfect number**
     1. Initialize `sum = 0`.
     2. For each divisor of `number` except itself:
        - Add the divisor to `sum`.
     3. If `sum == number`, output "Perfect number"; otherwise, output "Not a perfect number."
   - **Case 10: Exit**
     1. Output "Exiting the program."
     2. End the program.
6. End
