# Problem Analysis:
### Input: 
• Fuel_capacity in gallons

• Miles_per_gallon 


### Process:
Total Miles Travel = Fuel_capacity * Miles per gallon

### Output:

• Total number of miles the automobile can be driven without refueling

# Algorithm:

 Step 1: Start the program.

 Step 2: Print "Enter your fuel tank capacity of the car in gallons"

 Step 3: Input fuel_capacity` from the user

 Step 4: Print "Enter the number of miles per gallon the car can be driven"

 Step 5: Input miles_per_gallon` from the user

 Step 6: Calculate Total_miles_travel` as: Total_miles_travel = fuel_capacity * miles_per_gallon

 Step 7: Print  Total_miles_travel

 Step 8: End the program.

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
    





