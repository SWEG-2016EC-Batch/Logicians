```mermaid
flowchart TD
    A([Start]) --> B[/Input: Basic Salary/]
    A --> C[/Input: Worked Hours/]
    B --> C
    C --> D{Worked Hours > 40?}
    D -->|Yes| E[/Input: Bonus per Hour/]
    D -->|No| F[Set Bonus Payment to 0]
    E --> G[Calculate Bonus Payment]
    F --> G
    G --> H[Calculate Gross Salary]
    H --> I{Gross Salary < 200?}
    I -->|Yes| J[Tax Rate = 0]
    I -->|No| K{Gross Salary >= 200 && Gross Salary < 600?}
    K -->|Yes| L[Tax Rate = 0.1]
    K -->|No| M{Gross Salary >= 600 && Gross Salary < 1200?}
    M -->|Yes| N[Tax Rate = 0.15]
    M -->|No| O{Gross Salary >= 1200 && Gross Salary < 2000?}
    O -->|Yes| P[Tax Rate = 0.2]
    O -->|No| Q{Gross Salary >= 2000 && Gross Salary < 3500?}
    Q -->|Yes| R[Tax Rate = 0.25]
    Q -->|No| S[Tax Rate = 0.3]
    J --> T[Calculate Pension]
    L --> T
    N --> T
    P --> T
    R --> T
    S --> T
    T --> U[Calculate Tax]
    U --> V[Calculate Net Salary]
    V --> W[/Output: Net Salary/]
    W --> X([End])
