# Airline Reservation System Flowchart:

```mermaid
graph TD
   A([Start]) --> B[Display Welcome Message]
    B --> C[Show Menu Options]
    C --> D{User Choice?}
    
    D -->|1 or 2| E[Process Reservation]
    E --> F{Check Seat Availability}
    F -->|Available| G[Input Passenger Details]
    G --> H[Validate Name]
    H -->|Valid| I[Validate Sex]
    I -->|Valid| J[Validate Age]
    J -->|Valid| K[Validate Passport]
    K -->|Valid| L[Store Passenger Details]
    L --> M[Display Boarding Pass]
    
    F -->|Not Available| N{Offer Alternative Class}
    N -->|Yes| E
    N -->|No| O[Next Flight Message]
    
    D -->|3| P[Display Seat Status]
    P --> Q[Show First Class Seats]
    Q --> R[Show Economy Seats]
    
    D -->|4| S[Cancel Reservation]
    S --> T[Input Seat & Passport]
    T --> U{Validate Details}
    U -->|Valid| V[Clear Reservation]
    U -->|Invalid| W[Display Error]
    
    D -->|5| X[Search Passenger]
    X --> Y[Input Name]
    Y --> Z[Search First Class]
    Z --> AA{Found?}
    AA -->|No| AB[Search Economy]
    AB --> AC{Found?}
    AC -->|No| AD[Passenger Not Found]
    AC -->|Yes| AE[Display Details]
    AA -->|Yes| AE
    
    D -->|6| AF([Exit Program])
    
    M --> AG{Continue?}
    O --> AG
    R --> AG
    V --> AG
    W --> AG
    AE --> AG
    AD --> AG
    
    AG -->|Yes| C
    AG -->|No| AF
    
    D -->|Invalid| AH[Display Error]
    AH --> C
