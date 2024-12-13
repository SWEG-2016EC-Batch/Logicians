## Program Analysis

### Input:
1. **Test Score**
2. **Quiz Score**
3. **Project Score**
4. **Assignment Score**
5. **Final Exam Score**
### Process:
1. **Input Validation:**
   - For each input, validate if the input is within the specified range and is a valid number.
   - If the input is invalid, prompt the user to re-enter the value.

2. **Calculate Total Mark:**
   - Use the formula: total_mark = (test / 15) * 15 + (quiz / 5) * 5 + (project / 20) * 20 + (assignment / 10) * 10 + (final_exam / 50) * 50

3. **Determine Letter Grade:**
   - If `total_mark >= 90`: Grade is `A+`
   - Else if `total_mark >= 80`: Grade is `A`
   - Else if `total_mark >= 75`: Grade is `B+`
   - Else if `total_mark >= 60`: Grade is `B`
   - Else if `total_mark >= 55`: Grade is `C+`
   - Else if `total_mark >= 45`: Grade is `C`
   - Else if `total_mark >= 30`: Grade is `D`
   - Else: Grade is `F`

### Output:
1. **Total Mark**
2. **Letter Grade**


## Pseudocode

1. **Start**
   - Declare `float test, quiz, project, assignment, final_exam, total_mark`

2. **Input Test Score**
3. **Input Quiz Score**
4. **Input Project Score**
5. **Input Assignment Score**
6. **Input Final Exam Score**
7. **Calculate Total Mark**
   - `total_mark = (test / 15) * 15 + (quiz / 5) * 5 + (project / 20) * 20 + (assignment / 10) * 10 + (final_exam / 50) * 50`

8. **Decide Letter Grade:**
   - If `total_mark >= 90`:
     - Print "A+"
   - Else if `total_mark >= 80`:
     - Print "A"
   - Else if `total_mark >= 75`:
     - Print "B+"
   - Else if `total_mark >= 60`:
     - Print "B"
   - Else if `total_mark >= 55`:
     - Print "C+"
   - Else if `total_mark >= 45`:
     - Print "C"
   - Else if `total_mark >= 30`:
     - Print "D"
   - Else:
     - Print "F"
9. **Output Total Mark**
   - Print "Total Mark", 

10. **End**

