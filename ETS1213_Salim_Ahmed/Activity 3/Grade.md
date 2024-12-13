```mermaid

flowchart TD
    A([Start]) --> B[/Input: Number of Students/]
    B --> C[Loop: For each Student]
    C --> D[/Input: Number of Subjects/]
    D --> E[Loop: For each Subject]
    E --> F[/Input: Test Score 0-15/]
    F --> G[Is Test Score Valid?]
    G -->|No| F
    G -->|Yes| H[/Input: Quise Score 0-5/]
    H --> I[Is Quise Score Valid?]
    I -->|No| H
    I -->|Yes| J[/Input: Project Score 0-20/]
    J --> K[Is Project Score Valid?]
    K -->|No| J
    K -->|Yes| L[/Input: Assignment Score 0-10/]
    L --> M[Is Assignment Score Valid?]
    M -->|No| L
    M -->|Yes| N[/Input: Final Exam Score 0-50/]
    N --> O[Is Final Exam Score Valid?]
    O -->|No| N
    O -->|Yes| P[Calculate Total Marks]
    P --> Q[Is Total Marks >= 90?]
    Q -->|Yes| R[Grade: A+]
    Q -->|No| S[Is Total Marks >= 80?]
    S -->|Yes| T[Grade: A]
    S -->|No| U[Is Total Marks >= 75?]
    U -->|Yes| V[Grade: B+]
    U -->|No| W[Is Total Marks >= 60?]
    W -->|Yes| X[Grade: B]
    W -->|No| Y[Is Total Marks >= 55?]
    Y -->|Yes| Z[Grade: C+]
    Y -->|No| AA[Is Total Marks >= 45?]
    AA -->|Yes| AB[Grade: C]
    AA -->|No| AC[Is Total Marks >= 30?]
    AC -->|Yes| AD[Grade: D]
    AC -->|No| AE[Grade: F]
    R --> AF([End of Subject])
    T --> AF
    V --> AF
    X --> AF
    Z --> AF
    AB --> AF
    AD --> AF
    AE --> AF
    AF --> E
    E --> C
    C --> B
    B --> F
