```mermaid
graph TD
    A([Start]) --> B[/Enter row dimension/]
    B --> C[/Enter column dimension/]
    C --> D[For i = 1 to row_dimension]
    D --> E[For k = row_dimension to i]
    E --> F[/Print space/]
    F --> G[End for k]
    G --> H[For j = 1 to i]
    H --> I[/Print */]
    I --> J[/Print space/]
    J --> K[End for j]
    K --> L[Print newline]
    L --> M[End for i]
    M --> N([End])
