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
 ``` mermaid
graph TD
  
    A([start program]) --> B[/Enter base number/]
    
    B --> C[/input base number/]
    C --> D[/Enter exponent number/]
    D --> E[/input exponent number/]
    E --> F{Is y > 0?}
    
    F -->|Yes| G["For i from 1 to y (inclusive), multiply k by x"]
    G --> H["Print 'The result of the given number is x^y = k'"]
    
    F -->|No| I["For i from 1 to -y (inclusive), multiply k by x"]
     I --> K
     K["Print 'The result of the given number is x^y = 1/k'"]
    
   
    
    H --> M([End])
    K --> M
   
	


