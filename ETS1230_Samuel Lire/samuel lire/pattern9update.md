```mermaid
graph TD;
    Start([Start Program]) --> A[/Enter Row/];
    Start --> B[/Enter Column/];
    A --> C[/Input Row/];
    B --> D[/Input Column/];
    C --> E{Loop i from 1 to Row};
    D --> E;
    E --> F{Loop j from 1 to Column};
    F --> G{Check if on Border};
    G -- Yes --> H[/Print */];
    G -- No --> I[/Print Space/];
    H --> J[End of Column];
    I --> J;
    J --> K[End of Row];
    K --> End([End Program]);
