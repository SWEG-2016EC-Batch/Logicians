```mermaid
graph TD
    A([Start]) --> B[/Insert Number You want to be checked palindrome or not/]
    B --> C{Is n < 0?}
    C -->|Yes| D[Set n to -n]
    C -->|No| E[Set number to n]
    D --> E
    E --> F{Is number > 0?}
    F -->|Yes| G[Set remainder to number % 10]
    G --> H[Set reversed_number to reversed_number * 10 + remainder]
    H --> I[Set number to number / 10]
    I --> F
    F -->|No| J{Is reversed_number == n?}
    J -->|Yes| K[/Print n is palindrome number/]
    J -->|No| L[/Print n is not palindrome number/]
    K --> M([End])
    L --> M
