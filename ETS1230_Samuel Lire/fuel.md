# A Problem Analysis

## Input:
1. capacity_in_gallon: The fuel tank capacity in gallons (a double value).
 The user provides this input when prompted by the program.
   
2. mile_in_Pergallon: The number of miles the automobile can travel per gallon of fuel (a double value).
   The user provides this input when prompted by the program.

## Process:
Step 1: Multiply the fuel tank capacity (in gallons) by the miles the automobile can drive per gallon.
 This calculation provides the total number of miles the automobile can drive without refueling.
   Formula
   total_mile = capacity_in_gallon * mile_in_Pergallon
## Output:
total_mile: The total number of miles the automobile can drive without refueling, which is printed as output.
   The program displays this result to the user in the format:
    The automobile can be driven <total_mile> miles without refueling
    
# B pseudo code
   1.START
   
    2.DECLARE capacity_in_gallon, total_mile, mile_in_Pergallon as DOUBLE
    
    3.PRINT "Insert the capacity of the fuel tank in gallons"
    
    4.READ capacity_in_gallon
    
    5.PRINT "Insert the miles per gallon the automobile can drive"
    
    6.READ mile_in_Pergallon
    
    7.CALCULATE total_mile = capacity_in_gallon * mile_in_Pergallon
    
    8.PRINT "The automobile can be driven " + total_mile + " miles without refueling."
    
     9.END
   # c flowchart
     
     ```meraid
 graph TD
 
    A[START] --> B[DECLARE capacity_in_gallon, total_mile, mile_in_Pergallon as DOUBLE]
    
    B --> C[PRINT "Insert the capacity of the fuel tank in gallons"]
    
    C --> D[READ capacity_in_gallon]
    
    D --> E[PRINT "Insert the miles per gallon the automobile can drive"]
    
    E --> F[READ mile_in_Pergallon]
    
    F --> G[CALCULATE total_mile = capacity_in_gallon * mile_in_Pergallon]
    
    G --> H[PRINT "The automobile can be driven " + total_mile + " miles without refueling."]
    
    H --> I[END]

     

