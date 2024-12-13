```mermaid
graph TD;
    Start([Start Program]) --> A[/Enter the Row/];
    Start --> B[/Enter the Column/];
    A --> C[/Input Row/];
    B --> D[/Input Column/];
    C --> E{Loop i from 1 to Row};
    D --> E;
    E --> F{Loop j=i to Column};
    F --> G[/Print Space/];
    G --> H{Loop j=i to 1};
    H --> I[/Print j/];
    I --> J[End of Column];
    J --> K[End of Row];
    K --> End([End Program]);
