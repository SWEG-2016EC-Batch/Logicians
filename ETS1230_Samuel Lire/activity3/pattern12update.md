```mermaid
graph TD;
    Start([Start Program]) --> A[/Enter the Row/];
    Start --> B[/Enter the Column/];
    A --> C[/Input Row/];
    B --> D[/Input Column/];
    C --> E{Loop i from 1 to Row};
    D --> E;
    E --> F{Loop j=i to Column};
    F --> G[Print Space];
    G --> H{Loop j from 1 to i};
    H --> I{Check if on Border};
    I -- Yes --> J[Print * ];
    I -- No --> K[Print Space];
    J --> L[End of Column];
    K --> L;
    L --> M[End of Row];
    M --> End([End Program]);
