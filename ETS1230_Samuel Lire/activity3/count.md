```mermaid
graph TD
    A([Start]) --> B[/Insert Number/]
    B --> C{Is number < 0?}
    C -->|Yes| D[Make number positive]
    C -->|No| E[Set n = number]
    D --> E
    E --> F{Is n > 0?}
    F -->|Yes| G[Get last digit]
    G --> H[Divide n by 10]
    H --> I[Increment counter]
    I --> F
    F -->|No| J{Is number == 0?}
    J -->|Yes| K[Set counter = 1]
    J -->|No| L[/Output number of digits/]
    K --> L
    L --> M([End])
