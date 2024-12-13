```mermaid
graph TD
    A([Start])--> B[/Enter number/]
    B --> C{Is number < 0 or invalid?}
    C -->D[/Display invalid input/]
    D --> B
    C -->|No| E[Initialize factorial=1, sum=0]
    E --> F[Set n=number]
    F --> G{Is n > 0?}
    G -->|Yes| H[Set factorial=1]
    H --> I[Set reminder=n%10]
    I --> J{Is reminder 0 or 1?}
    J -->|Yes| K[Set factorial=1]
    J -->|No| L[Calculate factorial of reminder]
    L --> M[Add factorial to sum]
    K --> M
    M --> N[Divide n by 10]
    N --> G
    G -->|No| O{Is sum == number?}
    O -->P[/Display number is strong number/]
    O -->|No| Q[/Display number is not strong number/]
    P --> R([End])
    Q --> R([End])

