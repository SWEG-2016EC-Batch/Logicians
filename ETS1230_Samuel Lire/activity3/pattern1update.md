```mermaid
graph TD
    A([Start]) --> B[/Enter the row dimension/]
    B --> C[/Enter the column dimension/]
    C --> D[Loop from 1 to row_dimension]
    D --> E[Initialize number to 1]
    E --> F[Loop from 1 to column_dimension]
    F --> G[Print number and increment]
    G --> H[End inner loop]
    H --> I[Print newline]
    I --> J[End outer loop]
    J --> K([End])
