# A Problem Analysis

##  Input:

Base (x): A floating-point number entered by the user, which will be raised to a power

Exponent (y): A floating-point number entered by the user, which determines the power to which the base will be raised.

## Output:
The program outputs the result of x^y (base raised to the power of the exponent).

## Process:
The program first checks if the exponent y is less than or equal to 0.

If y <= 0, it attempts to compute the power using the formula k = 1/x for each iteration.

Otherwise, if y > 0, it computes the power by multiplying the base x by itself y times.

Finally, it prints the result of x^y.
# B Pseudo Code
1.Start Program

2.Declare variables:

3.Print "insert base"

4.Input base x from the user

5.Print "insert exponent"

6.Input exponent y from the user
7.Check If Exponent is Non-Positive (y <= 0)

7.1. If y <= 0:
7.1.2.Start a loop from i = y to i < 0:

7.1.3.Multiply k by 1/x in each iteration (this calculates k = (1/x)^|y| for negative y)

7.2.End loop

8.Otherwise, if Exponent is Positive (y > 0)

8.1.Start a loop from i = 1 to i <= y:

8.1.2.Multiply k by x in each iteration (this calculates k = x^y for positive y)

8.2.End loop

9.Print the result in the format: x^y = k

10.End Program
