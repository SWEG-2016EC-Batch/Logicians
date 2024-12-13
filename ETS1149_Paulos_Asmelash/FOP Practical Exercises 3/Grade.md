# Problem Analysis
### Inputs:

. Test Score

. Quiz Score

. Project Score

. Assignment Score

. Final Exam Score

### Process:
Compute Total Grade

Determine Grade

### Outputs:
Total Mark: The sum of the scores provided.

Final Grade: The letter grade corresponding to the total mark.

# Pseudocode:
1. Start
2. Declare variables: `test`, `quiz`, `project`, `assignment`, `final_exam`, `grade`.
3. Display a message: "Please enter how much you scored on 15% test."
4. Read input into `test`.
5. Display a message: "Please enter how much you scored on 5% quiz."
6. Read input into `quiz`.
7. Display a message: "Please enter how much you scored on 20% project."
8. Read input into `project`.
9. Display a message: "Please enter how much you scored on 10% assignment."
10. Read input into `assignment`.
11. Display a message: "Please enter how much you scored on 50% final exam."
12. Read input into `final_exam`.
13. Calculate the total grade:  
    - `grade = test + quiz + project + assignment + final_exam`.
14. Display the message: "Your total mark is: " followed by `grade`.
15. Display the message: "Your Grade is: ".
16. Determine the grade using the following conditions:
    - If `grade >= 90`, display "A+".
    - Else if `grade >= 80`, display "A".
    - Else if `grade >= 75`, display "B+".
    - Else if `grade >= 60`, display "B".
    - Else if `grade >= 55`, display "C+".
    - Else if `grade >= 45`, display "C".
    - Else if `grade >= 30`, display "D".
    - Else, display "F".
17. End

# Flowchart:
~~~mermaid
flowchart TD
    A([Start]) --> B[Declare variables: test, quiz, project, assignment, final_exam, grade]
    B --> C[/Prompt and read test score for 15%/]
    C --> D[/Prompt and read quiz score for 5%/]
    D --> E[/Prompt and read project score for 20%/]
    E --> F[/Prompt and read assignment score for 10%/]
    F --> G[/Prompt and read final exam score for 50%/]
    G --> H[Calculate total grade: grade = test + quiz + project + assignment + final_exam]
    H --> I[/Display total mark: grade/]
    I --> J[Determine grade based on conditions]
    J --> K{Is grade >= 90?}
    K -- Yes --> L[/Display "A+"/]
    K -- No --> M{Is grade >= 80?}
    M -- Yes --> N[/Display "A"/]
    M -- No --> O{Is grade >= 75?}
    O -- Yes --> P[/Display "B+"/]
    O -- No --> Q{Is grade >= 60?}
    Q -- Yes --> R[/Display "B"/]
    Q -- No --> S{Is grade >= 55?}
    S -- Yes --> T[/Display "C+"/]
    S -- No --> U{Is grade >= 45?}
    U -- Yes --> V[/Display "C"/]
    U -- No --> W{Is grade >= 30?}
    W -- Yes --> X[/Display "D"/]
    W -- No --> Y[/Display "F"/]
    L --> Z([End])
    N --> Z
    P --> Z
    R --> Z
    T --> Z
    V --> Z
    X --> Z
    Y --> Z
