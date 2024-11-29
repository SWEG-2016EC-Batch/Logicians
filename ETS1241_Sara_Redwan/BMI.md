The purpose of this program is to calculate the Body Mass Index (BMI) for a multiple number of people based on their 
weight and height, then categorize each person's BMI.
Input: Number of people (NumBMI)
       Each person's weight and height
Process:
Read the number of people (NumBMI).
Loop through each person from 1 to NumBMI: For each person:
Read their weight in kilograms (weight).
Read their height in meters (height).
Calculate BMI using the formula BMI = weight / (height * height).
Categorize the BMI: If BMI < 18.5, the person is "Underweight".
                    If BMI is between 18.5 and 24.9, the person has a "Normal and healthy weight".
                    If BMI is between 25 and 29.9, the person is "Overweight".
                    If BMI >= 30, the person is "Obese".
Output:
The BMI value for each person.
The corresponding BMI category (Underweight, Normal and healthy weight, Overweight, Obese).

Step 1: Start : Declare variables weight, height, BMI, and NumBMI.
Step 2: Ask the user for the number of people
Step 3: Loop through each person
For each person from 1 to NumBMI:
input the height and mass
Step 4: print BMI
Step 5: Determine BMI Category
If BMI < 18.5, print "Underweight"
Else if BMI is between 18.5 and 24.9, print "Normal and healthy weight"
Else if BMI is between 25 and 29.9, print "Overweight"
Else, print "Obese!"
Step 6: End
