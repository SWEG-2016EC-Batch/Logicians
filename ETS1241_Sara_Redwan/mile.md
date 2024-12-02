# Problem Analysis:
### Input: 
• Fuel_capacity in gallons

• Miles_per_gallon 


### Process:
Total Miles Travel = Fuel_capacity * Miles per gallon

### Output:

• Total number of miles the automobile can be driven without refueling

# Algorithm:

Step 1. Start the program.
Step 2. Declare `fuel_capacity`, `mile_per_gallon`, `total_mile` using `float` data type.
Step 3. Prompt the user to enter the amount of `fuel_capacity`.
Step 4. Put the `fuel_capacity` in `fuel_capacity` variable.
Step 5. Validate the input; if it is invalid,go to step 3, otherwise proceed to step 6.
Step 6. Prompt the user to enter the length of mile it can be driven per gallon.
Step 7. Put the mile in `mile_per_gallon` variable.
Step 8. Validate the input; if it is invalid, go to step 7, otherwise proceed to step 9.
Step 9. Do operation `fuel_capacity * mile_per_gallon` and put it in `total_mile` variable.
Step 10. Print `total_mile` variable.
Step 11. Stop the program.

 # Flowchart
```mermaid
graph TD
    A([Start Program]) --> B[/Input fuel_capacity/]
    B --> C{Is the fuel capacity a positive number?}
    C -->|Yes| D[/Input miles_per_gallon/]
    C -->|No| B
    D --> E{Is the miles per gallon a positive number?}
    E --> |Yes| F[Calculate: Total miles = fuel_capacity * miles_per_gallon]
    E -->|No| D
    F --> G[/print the result/]
    G --> H([End])
    





