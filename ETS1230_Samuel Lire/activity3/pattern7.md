```mermaid
graph TD;
    A([Start]) --> B[/Enter Row/];
    B --> C[/Input Row/];
    A --> D[/Enter Column/];
    D --> E[/Input Column/];
    C --> F{Loop i from 1 to Row};
    E --> F;
    F --> G{Loop j from 1 to Column};
    G --> H{Check if on Border};
    H -- Yes --> I[/Print */];
    H -- No --> J[/Print Space/];
    I --> K[End of Column];
    J --> K;
    K --> L[End of Row];
    L --> M([End])
