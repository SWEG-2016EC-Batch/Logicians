```mermaid
graph TD
    A([Start]) --> B[/Enter the number/]
    B --> C[Get last digit]
    C --> D{Is number > 10?}
    D -->|Yes| E[Divide number by 10]
    E --> D
    D -->|No| F[Get first digit]
    F --> G[/Output first digit/]
    G --> H[/Output last digit/]
    H --> I[/Output sum of first and last digit/]
    I --> J([End])
