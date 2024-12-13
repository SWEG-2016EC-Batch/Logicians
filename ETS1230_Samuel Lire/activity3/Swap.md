# Problem Analysis

## Input:

An integer number entered by the user.

## Output:

The original number.

The number after swapping the first and last digits.

# Process:

swap the first and last digit.

# Pseudo Code

1.Start

2.Declear variables: number, first_digit, last_digit, remaining_digits, swapped_number, n

3.Print "Enter the number"

4. Input number

5. last_digit = number % 10
6. 
6.n = number

7.remaining_digits = log10(n)

8.While n >= 10

   8.1. n = n / 10
   
 8.1. END WHILE
   
9. first_digit = n

10. swapped_number = last_digit * 10^remaining_digits + (number % 10^remaining_digits) - last_digit + first_digit

11.Print "The original number is: ", number

12. Print "The number after swapping the first and last digits is: ", swapped_number

13.End
