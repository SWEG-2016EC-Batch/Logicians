```mermaid
graph TD
    A([Start]) --> B[/Enter row dimension/]
    B --> C[/Enter column dimension/]
    C --> D{For each row from 1 to row_dimension}
    D --> E{For each column from 1 to current row}
    E --> F[Print number]
    F --> G[Increment number]
    G --> E
    E --> H[Print new line]
    H --> D
    D --> I([End])
