```mermaid
graph TD
    A([Start]) --> B[/Enter row dimension/]
    B --> C[For i = 1 to row_dimension]
    C --> D[For j = row_dimension to i]
    D --> E[/Print */]
    E --> F[/Print space/]
    F --> G[End for j]
    G --> H[/Print newline/]
    H --> I[End for i]
    I --> J([End])
