```mermaid
graph TD
    A([Start]) --> B[/Enter the number/]
    B --> C{Is input valid?}
    C -->|No| D[/Invalid input message/]
    D --> E[Clear input and ignore]
    E --> B
    C -->|Yes| F[Initialize sum to 0]
    F --> G[Loop from 1 to number-1]
    G --> H{Is i a divisor of number?}
    H -->|Yes| I[Add i to sum]
    H -->|No| J[Continue loop]
    I --> J
    J --> K{Is sum equal to number?}
    K -->|Yes| L[/Print number is perfect/]
    K -->|No| M[/Print number is not perfect/]
    L --> N([End])
    M --> N
