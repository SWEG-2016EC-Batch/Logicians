## Program Analysis

#### Input:
1. **Menu Choice** 

#### Process:
1. **Pattern Display:**
   - Based on the user's choice, the corresponding pattern is displayed:
     1. **Square with Numbers:** Display a 5x5 square filled with numbers.
     2. **Rectangle with Uppercase Alphabets:** Display a 4x6 rectangle filled with uppercase alphabets.
     3. **Left Hand Pyramid with Numbers:** Display a left hand pyramid using numbers.
     4. **Right Side Pyramid with Numbers:** Display a right side pyramid using numbers.
     5. **Right Triangle with Uppercase Alphabets:** Display a right triangle using uppercase alphabets.
     6. **Square with Lowercase Alphabets:** Display a 5x5 square filled with lowercase alphabets.
     7. **Hollow Box with Stars:** Display a 7x8 hollow box using stars.
     8. **Inverted Half Pyramid with Stars:** Display an inverted half pyramid using stars.
     9. **Hollow Inverted Half Pyramid with Stars:** Display a hollow inverted half pyramid using stars.
     10. **Full Pyramid with Stars:** Display a full pyramid using stars.
     11. **Inverted Full Pyramid with Stars:** Display an inverted full pyramid using stars.
     12. **Hollow Full Pyramid with Stars:** Display a hollow full pyramid using stars.
     13. **Exit:** Exit the program.

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
   - **Case 1: Square with Numbers**
     - For `i` from 1 to 5:
       - For `j` from 1 to 5:
         - Print `j`
   
   - **Case 2: Rectangle with Uppercase Alphabets**
     - Initialize `alphabate` to 'A'
     - For `i` from 1 to 4:
       - For `j` from 1 to 6:
         - Print `alphabate` and increment `alphabate`
    
     
   - **Case 3: Left Hand Pyramid with Numbers**
     - For `i` from 1 to 5:
       - For `j` from 1 to `i`:
         - Print `j`
       
   - **Case 4: Right Side Pyramid with Numbers**
     - For `i` from 1 to 5:
       - For `k` from 5 - `i` to 1:
         - Print space
       - For `j` from `i` to 1:
         - Print `j`
   - **Case 5: Right Triangle with Uppercase Alphabets**
     - Initialize `alphabate` to 'A'
     - For `i` from 1 to 5:
       - For `j` from 1 to `i`:
         - Print `alphabate` and increment `alphabate`
\

   - **Case 6: Square with Lowercase Alphabets**
     - Initialize `alphabate` to 'a'
     - For `i` from 1 to 5:
       - For `j` from 1 to 5:
         - Print `alphabate` and increment `alphabate`
   

   - **Case 7: Hollow Box with Stars**
     - For `i` from 1 to 7:
       - For `j` from 1 to 8:
         - If `i` is 1 or 7 or `j` is 1 or 8:
           - Print "*"
         - Else:
           - Print space


   - **Case 8: Inverted Half Pyramid with Stars**
     - For `i` from 6 to 1:
       - For `j` from `i` to 1:
         - Print "*"

   - **Case 9: Hollow Inverted Half Pyramid with Stars**
     - For `i` from 6 to 1:
       - For `j` from `i` to 1:
         - If `i` is 6 or 1 or `j` is `i` or 1:
           - Print "*"
         - Else:
           - Print space
       
   - **Case 10: Full Pyramid with Stars**
     - For `i` from 1 to 6:
       - For `k` from 6 - `i` to 1:
         - Print space
       - For `j` from 1 to `i`:
         - Print "*"


   - **Case 11: Inverted Full Pyramid with Stars**
     - For `i` from 6 to 1:
       - For `k` from 6 - `i` to 1:
         - Print space
       - For `j` from `i` to 1:
         - Print "*"
       - Print newline

   - **Case 12: Hollow Full Pyramid with Stars**
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
