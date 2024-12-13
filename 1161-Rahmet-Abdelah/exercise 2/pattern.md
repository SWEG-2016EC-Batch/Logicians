## Program Analysis

#### Input:
1. **Menu Choice** 

#### Process:
1. **Pattern Display:**
   - Based on the user's choice, the corresponding pattern is displayed:
   **MENU**   
1.pattern for a number square

2.pattern for a number right angle triangle

3.pattern for a flipped number triangle

4.pattern for a continuing alphabet square

5.pattern for an alphabet triangle

6.pattern for a repeating alphabet square

7.pattern for a pyramid

8.pattern for an inverted pyramid

9.pattern for an inverted half pyramid

10.pattern for a hollow square

11.pattern of hollow inverted half pyramid

12.pattern of hollow  pyramid

13.to exit


#### Output:
- **Based on User's Choice:**
  - **Pattern Display:** The chosen pattern is displayed.
  - **Exit Message:** "Exiting..." message upon exiting the program.
  - **Invalid Choice:** "Invalid choice!" message if the user enters an invalid option.

## Pseudocode

1. **Start**
   - Declare `choice`

2. **Display Menu:**
   - Print "Menu (Choose the pattern you want to see):"
   - Print the list of pattern options from 1 to 13
   - Print "Enter your choice (1-12):"
   - Read `choice`

3. **Execute Based on Choice:**
   - **Case 1:**
     - For `i` from 1 to 5:
       - For `j` from 1 to 5:
         - Print `j`
   
   - **Case 2:**
     - Initialize `alphabate` to 'A'
     - For `i` from 1 to 4:
       - For `j` from 1 to 6:
         - Print `alphabate` and increment `alphabate`
    
     
   - **Case 3:**
     - For `i` from 1 to 5:
       - For `j` from 1 to `i`:
         - Print `j`
       
   - **Case 4:**
     - For `i` from 1 to 5:
       - For `k` from 5 - `i` to 1:
         - Print space
       - For `j` from `i` to 1:
         - Print `j`
   - **Case 5:**
     - Initialize `alphabate` to 'A'
     - For `i` from 1 to 5:
       - For `j` from 1 to `i`:
         - Print `alphabate` and increment `alphabate`
\

   - **Case 6:**
     - Initialize `alphabate` to 'a'
     - For `i` from 1 to 5:
       - For `j` from 1 to 5:
         - Print `alphabate` and increment `alphabate`
   

   - **Case 7:**
     - For `i` from 1 to 7:
       - For `j` from 1 to 8:
         - If `i` is 1 or 7 or `j` is 1 or 8:
           - Print "*"
         - Else:
           - Print space


   - **Case 8:**
     - For `i` from 6 to 1:
       - For `j` from `i` to 1:
         - Print "*"

   - **Case 9:**
     - For `i` from 6 to 1:
       - For `j` from `i` to 1:
         - If `i` is 6 or 1 or `j` is `i` or 1:
           - Print "*"
         - Else:
           - Print space
       
   - **Case 10:**
     - For `i` from 1 to 6:
       - For `k` from 6 - `i` to 1:
         - Print space
       - For `j` from 1 to `i`:
         - Print "*"


   - **Case 11:**
     - For `i` from 6 to 1:
       - For `k` from 6 - `i` to 1:
         - Print space
       - For `j` from `i` to 1:
         - Print "*"
       - Print newline

   - **Case 12:**
     - For `i` from 1 to 6:
       - For `k` from 6 - `i` to 1:
         - Print space
       - For `j` from 1 to `i`:
         - If `i` is 1 or 6 or `j` is 1 or `i`:
           - Print "*"
         - Else:
           - Print space

   - **Case 13: Exit**
     - Print "Exiting..."
   
   - **Default: Invalid Choice**
     - Print "Invalid choice!"

4. **End**

