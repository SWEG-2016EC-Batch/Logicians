# Problem Analysis

### Input:

• A number base x

• An exponent y

### Process:

Calculate the power using the formula: power = x^y.
### Output:
• Result = x^y (x raised to y)

# Algorithm:


Step 1: Start the program.

Step 2: Print "Enter the base number"

Step 3: Input `x` (base number) from the user

Step 4: Print "Enter the exponent number"

Step 5: Input `y` (exponent) from the user

Step 6: If `y` is greater than 0:

    - Step 6.1: For `i` from 1 to `y` (inclusive), multiply `k` by `x` in each iteration
    
    - Step 6.2: Print "The result of the given number is x^y = k"

Step 7: Else if `y` is less than 0:

    - Step 7.1: For `i` from 1 to `-y` (inclusive), multiply `k` by `x` in each iteration
    
    - Step 7.2: Print "The result of the given number is x^y = 1/k"

 Step 8: End the program.

 # Flowchart

 flowchart TD
    A[Start] --> B[Initialize variables: float x, result=1; int y, p]
    B --> C[Prompt "Enter the value of base"]
    C --> D[Input x]
    D --> E{cin.fail() for x?}
    E -- Yes --> F[Output "Invalid input for base. Please enter a number."] --> G[Exit with return 1]
    E -- No --> H[Prompt "Enter the value of exponent"]
    H --> I[Input y]
    I --> J{cin.fail() for y?}
    J -- Yes --> K[Output "Invalid input for exponent. Please enter an integer."] --> G
    J -- No --> L[Assign p = y]
    L --> M{y < 0?}
    M -- Yes --> N[Set y = -y]
    M -- No --> O[Start loop: for i = 0; i < y; i++]
    N --> O
    O --> P[Multiply result by x in each iteration]
    P --> Q{Loop completed?}
    Q -- No --> O
    Q -- Yes --> R{p < 0?}
    R -- Yes --> S[Set result = 1 / result]
    R -- No --> T{p == 0?}
    T -- Yes --> U[Set result = 1]
    T -- No --> V[Proceed with calculated result]
    S --> V
    U --> V
    V --> W[Output "The result of x^p is: result"]
    W --> X[Exit]
