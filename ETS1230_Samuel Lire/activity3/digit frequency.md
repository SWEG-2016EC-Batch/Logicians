```mermaid
flowchart TD
    A([Start]) --> B[/Input: Enter an integer/]
    B --> C{Is number < 0?}
    C -->|Yes| D[Convert number to absolute value]
    C -->|No| E[Proceed to counting digits]
    D --> E
    E --> F{Is number == 0?}
    F -->|Yes| G[Set frequency 0 = 1]
    F -->|No| H[Loop through digits]
    G --> J[/Display Frequency Table/]
    H --> I[Extract last digit digit = number % 10]
    I --> J[Update frequency digit and divide number by 10]
    J --> F
    H --> J
    J --> K[/Display Frequency Tabl/]
    K --> L([End])
