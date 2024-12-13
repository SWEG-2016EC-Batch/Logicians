### Program Analysis

#### Input:
1. **Menu Choice** 
2. **Number of Rows** 
3. **Number of Columns** 

#### Process:
1. **Pattern Display:**
   - Based on the user's choice, the corresponding pattern is displayed:
     1. **Square with Numbers:** Display a square with the specified number of rows and columns filled with numbers.
     2. **Rectangle with Uppercase Alphabets:** Display a rectangle with the specified number of rows and columns filled with uppercase alphabets.
     3. **Left-Hand Pyramid with Numbers:** Display a left-hand pyramid with numbers.
     4. **Right-Hand Pyramid with Numbers:** Display a right-hand pyramid with numbers.
     5. **Right Triangle with Uppercase Alphabets:** Display a right triangle with uppercase alphabets.
     6. **Square with Lowercase Alphabets:** Display a square with the specified number of rows and columns filled with lowercase alphabets.
     7. **Hollow Box with Stars:** Display a hollow box with the specified number of rows and columns filled with stars.
     8. **Inverted Half Pyramid with Stars:** Display an inverted half pyramid with stars.
     9. **Hollow Inverted Half Pyramid with Stars:** Display a hollow inverted half pyramid with stars.
     10. **Full Pyramid with Stars:** Display a full pyramid with stars.
     11. **Inverted Full Pyramid with Stars:** Display an inverted full pyramid with stars.
     12. **Hollow Full Pyramid with Stars:** Display a hollow full pyramid with stars.
     13. **Exit:** Exit the program.

#### Output:
- **Pattern Display:** The chosen pattern is displayed based on the user's inputs.
- **Exit Message:** "Exiting..." message upon exiting the program.
- **Invalid Choice:** "Invalid choice!" message if the user enters an invalid option.

### Pseudocode

1. **Start**
   - Declare `choice, rows, cols`

2. **Display Menu:**
   - Print "Menu:"
   - Print the list of pattern options from 1 to 13
   - Print "Enter your choice (1-12):"
   - Read `choice`

3. **Input Rows and Columns:**
   - If `choice` is between 1 and 12:
     - Print "Enter the number of rows:"
     - Read `rows`
     - If `choice` is 1, 2, 6, or 7:
       - Print "Enter the number of columns:"
       - Read `cols`

4. **Execute Based on Choice:**
   - **Case 1: Square with Numbers**
     - For `i` from 1 to `rows`:
       - For `j` from 1 to `cols`:
         - Print `j`

   - **Case 2: Rectangle with Uppercase Alphabets**
     - Initialize `alphabate` to 'A'
     - For `i` from 1 to `rows`:
       - For `j` from 1 to `cols`:
         - Print `alphabate` and increment `alphabate`
     
   - **Case 3: Left-Hand Pyramid with Numbers**
     - For `i` from 1 to `rows`:
       - For `j` from 1 to `i`:
         - Print `j`

   - **Case 4: Right-Hand Pyramid with Numbers**
     - For `i` from 1 to `rows`:
       - For `k` from `rows - i` to 1:
         - Print space
       - For `j` from `i` to 1:
         - Print `j`
    

   - **Case 5: Right Triangle with Uppercase Alphabets**
     - Initialize `alphabate` to 'A'
     - For `i` from 1 to `rows`:
       - For `j` from 1 to `i`:
         - Print `alphabate` and increment `alphabate`
      

   - **Case 6: Square with Lowercase Alphabets**
     - Initialize `alphabate` to 'a'
     - For `i` from 1 to `rows`:
       - For `j` from 1 to `cols`:
         - Print `alphabate` and increment `alphabate`
       

   - **Case 7: Hollow Box with Stars**
     - For `i` from 1 to `rows`:
       - For `j` from 1 to `cols`:
         - If `i` is 1 or `rows` or `j` is 1 or `cols`:
           - Print "*"
         - Else:
           - Print space
  

   - **Case 8: Inverted Half Pyramid with Stars**
     - For `i` from `rows` to 1:
       - For `j` from `i` to 1:
         - Print "*"
      

   - **Case 9: Hollow Inverted Half Pyramid with Stars**
     - For `i` from `rows` to 1:
       - For `j` from `i` to 1:
         - If `i` is `rows` or 1 or `j` is `i` or 1:
           - Print "*"
         - Else:
           - Print space
     
   - **Case 10: Full Pyramid with Stars**
     - For `i` from 1 to `rows`:
       - For `k` from `rows - i` to 1:
         - Print space
       - For `j` from 1 to `i`:
         - Print "*"
       

   - **Case 11: Inverted Full Pyramid with Stars**
     - For `i` from `rows` to 1:
       - For `k` from `rows - i` to 1:
         - Print space
       - For `j` from `i` to 1:
         - Print "*"
       

   - **Case 12: Hollow Full Pyramid with Stars**
     - For `i` from 1 to `rows`:
       - For `k` from `rows - i` to 1:
         - Print space
       - For `j` from 1 to `i`:
         - If `i` is 1 or `rows` or `j` is 1 or `i`:
           - Print "*"
         - Else:
           - Print space
       

   - **Case 13: Exit**
     - Print "Exiting..."
   
   - **Default: Invalid Choice**
     - Print "Invalid choice!"

5. **End**
