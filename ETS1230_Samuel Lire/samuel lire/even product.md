```mermaid
graph TD
    A([Start]) --> B[/Enter number/]
    B --> C{Is number < 0?}
    C -->|Yes| D[Make number positive]
    C -->|No| E[Set n=number]
    D --> E
    E --> F{Is n > 0?}
    F -->|Yes| G[Set reminder=n%10]
    G --> H{Is reminder even?}
    H -->|Yes| I[Multiply product by reminder]
    H -->|No| J[Do nothing]
    I --> K[Divide n by 10]
    J --> K
    K --> F
    F -->|No| L[/Display product of even digits/]
    L --> M([End])
