```mermaid
graph TD
    A([Start]) --> B[Set row_dimension to 6]
    B --> C[Set column_dimension to 6]
    C --> D[For i = row_dimension to 1]
    D --> E[For k = row_dimension - i + 1 to 1]
    E --> F[/Print space/]
    F --> G[End for k]
    G --> H[For j = 1 to i]
    H --> I[/Print */]
    I --> J[/Print space/]
    J --> K[End for j]
    K --> L[Print newline]
    L --> M[End for i]
    M --> N([End])
