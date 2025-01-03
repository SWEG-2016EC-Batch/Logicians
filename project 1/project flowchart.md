# Airline Reservation System Flowchart:

```mermaid
graph TD
    A([Start]) --> B[/Display Main Menu/]
    B --> C{Choice 1: First Class}
    B --> D{Choice 2: Economy}
    B --> E{Choice 3: Show Seat Status}
    B --> F{Choice 4: Cancel Reservation}
    B --> G{Choice 5: Search Passenger by Name}
    B --> H{Choice 6: Exit Program}
    
    C --> I[Select Seat in First Class]
    I --> J[/Enter Passenger Details Name, Sex, Age, Passport/]
    J --> K[Assign Seat and Show Boarding Pass]
    K --> L{Is First Class Full?}
    L --> M[Offer Economy as Alternative]
    M --> C
    
    D --> N[Select Seat in Economy]
    N --> O[/Enter Passenger Details Name, Sex, Age, Passport/]
    O --> P[Assign Seat and Show Boarding Pass]
    P --> Q{Is Economy Full?}
    Q --> R[Offer First Class as Alternative]
    R --> D

    E --> S[/Display Seat Status First Class + Economy/]
    
    F --> T[Cancel Reservation: Enter Seat Number and Passport]
    T --> U{Is Reservation Valid?}
    U --> V[Cancel Reservation and Clear Data]
    U --> W[/Show Error Message/]

    G --> X[Search Passenger by Name]
    X --> Y{Found in First Class?}
    Y --> Z[/Show Passenger in First Class/]
    Y --> AA{Found in Economy?}
    AA --> AB[/Show Passenger in Economy/]
    AA --> AC[/Show Not Found Message/]

    H --> AD([Exit Program])
    
    W --> B
    AC --> B
    AB --> B
    Z --> B
    V --> B
    M --> B
    R --> B
    K --> B
    L --> B
    P --> B
    Q --> B
    J --> B
    O --> B
    S --> B
    T --> B
    X --> B
    I --> B
    N --> B


    
