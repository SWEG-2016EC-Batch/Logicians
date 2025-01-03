# Airline Reservation System Flowchart

```mermaid
graph TD;
    A[Start] --> B[Display Menu]
    B --> |1: First Class| C{Seat Available?}
    C --> |Yes| D[Assign Seat in First Class]
    D --> E[Enter Passenger Details]
    E --> F[Display Boarding Pass]
    F --> B
    C --> |No| G[Offer Economy Class]
    G --> H{Accept Economy Class?}
    H --> |Yes| I[Assign Seat in Economy]
    I --> E
    H --> |No| B
    B --> |2: Economy| J{Seat Available?}
    J --> |Yes| K[Assign Seat in Economy]
    K --> E
    J --> |No| L[Offer First Class]
    L --> M{Accept First Class?}
    M --> |Yes| D
    M --> |No| B
    B --> |3: See Seat Status| N[Display Seat Status]
    N --> B
    B --> |4: Cancel Reservation| O[Enter Seat Number and Passport]
    O --> P{Valid Details?}
    P --> |Yes| Q[Cancel Reservation]
    Q --> B
    P --> |No| B
    B --> |5: Search Passenger| R[Enter Passenger Name]
    R --> S[Search in First Class]
    S --> T{Found?}
    T --> |Yes| U[Display Passenger Details]
    U --> B
    T --> |No| V[Search in Economy]
    V --> W{Found?}
    W --> |Yes| U
    W --> |No| X[Display Not Found]
    X --> B
    B --> |6: Exit| Y[Exit Program]
    Y --> Z[Stop]
