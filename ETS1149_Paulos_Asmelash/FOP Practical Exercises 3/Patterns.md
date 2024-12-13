# Problem Analysis:
### Inputs:
1. Choice of Pattern:

The user selects a number from 1 to 12 corresponding to the desired pattern type.

2. Continue or Exit:

After displaying the pattern, the user is asked whether they want to continue or exit the program (1 for continue, 0 for exit)
### Process:
1. Menu Display:

The program shows a menu listing all 12 patterns, each identified by a number.

2. Switch Statement:

      Based on the user's choice, the corresponding case in the switch statement is executed.

      Each case contains a unique pattern logic implemented using nested for loops.

3. Pattern Logic:

The patterns are created using combinations of:

            Row-wise iteration (outer loop).
            
            Column-wise iteration (inner loop).
            
            Conditions to decide whether to print a character, space, or star.
            
4.Repeat Option:
The do-while loop repeats the menu and processing until the user chooses to exit.
### Outputs:
  Depending on the user's choice, the program outputs the corresponding pattern to the console.
 
  After displaying the pattern, it prompts the user to continue or exit.
  # Pseudocode:

#### **1. Start**
#### **2. Declare Variables**
- `choice` (integer): To store the user's pattern selection.
- `cont` (integer): To control whether the program should continue or exit.

#### **3. Begin a Loop**
- Use a `do-while` loop to repeatedly show the menu and execute patterns until the user chooses to exit.

---

#### **4. Display Menu**
Print the following menu options for pattern choices:
1. Rectangle of Numbers  
2. Rectangle of Uppercase Alphabets  
3. Incremental Number Pyramid  
4. Reversed Incremental Number Pyramid  
5. Alphabetic Half Pyramid  
6. Rectangle of Lowercase Alphabets  
7. Hollow Star Rectangle  
8. Inverted Star Half Pyramid  
9. Hollow Inverted Star Pyramid  
10. Star Pyramid  
11. Inverted Star Pyramid  
12. Hollow Star Pyramid  

Prompt the user to **Enter the choice of pattern**.


#### **5. Read User Input**
- Read the user's input for `choice`.

#### **6. Execute the Selected Pattern**
Use a `switch` statement based on the value of `choice`. For each case:
1. **Rectangle of Numbers**:  
   - Use nested loops to print numbers in a rectangular grid.  
   - Outer loop: Iterate 5 rows.  
   - Inner loop: Print numbers from 1 to 5 in each row.

2. **Rectangle of Uppercase Alphabets**:  
   - Use nested loops to print uppercase alphabets.  
   - Outer loop: Iterate 4 rows.  
   - Inner loop: Print 6 consecutive alphabets starting from 'A'. Stop when reaching 'X'.

3. **Incremental Number Pyramid**:  
   - Use nested loops to print numbers in a triangular shape.  
   - Outer loop: Iterate up to 5 rows.  
   - Inner loop: Print numbers from 1 to the current row number.

4. **Reversed Incremental Number Pyramid**:  
   - Use nested loops to create a reverse-aligned triangular pattern of numbers.  
   - Outer loop: Iterate up to 5 rows.  
   - First inner loop: Print spaces for alignment.  
   - Second inner loop: Print numbers in reverse order.

5. **Alphabetic Half Pyramid**:  
   - Use nested loops to print alphabets in a triangular shape.  
   - Outer loop: Iterate up to 5 rows.  
   - Inner loop: Print increasing alphabets for each row.

6. **Rectangle of Lowercase Alphabets**:  
   - Use nested loops to print lowercase alphabets in a grid.  
   - Outer loop: Iterate 5 rows.  
   - Inner loop: Print alphabets from 'a' to 'e'.

7. **Hollow Star Rectangle**:  
   - Use nested loops to create a rectangle with stars at the edges and spaces inside.  
   - Outer loop: Iterate 5 rows.  
   - Inner loop: Print '*' for border cells and spaces for inner cells.

8. **Inverted Star Half Pyramid**:  
   - Use nested loops to create an inverted half-pyramid of stars.  
   - Outer loop: Iterate 5 rows.  
   - Inner loop: Print stars, decreasing with each row.

9. **Hollow Inverted Star Pyramid**:  
   - Use nested loops to create a hollow inverted star pyramid.  
   - Outer loop: Iterate 5 rows.  
   - Inner loop: Print stars only for border cells.

10. **Star Pyramid**:  
    - Use nested loops to create a centered star pyramid.  
    - Outer loop: Iterate 5 rows.  
    - First inner loop: Print spaces for alignment.  
    - Second inner loop: Print stars.

11. **Inverted Star Pyramid**:  
    - Use nested loops to create a centered inverted star pyramid.  
    - Outer loop: Iterate 5 rows.  
    - First inner loop: Print spaces for alignment.  
    - Second inner loop: Print stars.

12. **Hollow Star Pyramid**:  
    - Use nested loops to create a hollow star pyramid.  
    - Outer loop: Iterate 5 rows.  
    - First inner loop: Print spaces for alignment.  
    - Second inner loop: Print stars only for border cells.



#### **7. Handle Invalid Choices**
- For any choice outside the range `1-12`, display "Invalid choice."



#### **8. Prompt for Continuation**
- Ask the user whether they want to continue (`1`) or exit (`0`).

-
#### **9. End Loop**
- If `cont == 1`, repeat the menu; otherwise, exit the loop.

---

#### **10. Display Goodbye Message**
Print "Thank you!!!".

#### **11. End**
