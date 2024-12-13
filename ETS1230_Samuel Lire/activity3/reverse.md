# Problem Analysis
Problem Statement: Reverse the digits of a given integer.

## Input:

An integer n (can be positive or negative).

## Output:

The reversed integer.

## Process:

reverse the given number.
# Pseudocode

1.start

   2.DECLARE number, reversed_number, remainder, n AS INTEGER
    
  SET reversed_number TO 0

  3.PRINT "Insert Number You want to be reversed"
    
  4.READ n

  5.IF n < 0 THEN
    
  6.    SET n TO -n
  
   7.SET number TO n

   8.WHILE number > 0 DO
   
   8.1 SET remainder TO number % 10
        
   8.2 SET reversed_number TO (reversed_number * 10) + remainder
           
   8.3 SET number TO number / 10
          
  8.4 END WHILE

   9. PRINT "Your reversed number is: ", reversed_number
      
10.END

