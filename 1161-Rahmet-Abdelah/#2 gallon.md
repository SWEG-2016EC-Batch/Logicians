# problem analysis for the question
##Problem Analysis:
### Input: 
• Fuel_capacity in gallons

• Miles_per_gallon 


### Process:
Total Miles Travel = Fuel_capacity * Miles per gallon

### Output:

• Total number of miles the automobile can be driven without refueling


## psedocode

Step1:start

Step2:variable initialization

Step3: accept and read the variables

Step4:calculate the miles the automobile can move with out refueling

Step4.1:miles =capacity of the gallon*miles per gallon

Step5:print the value

Step6:end

 # Flowchart
``` mermaid
graph TD
    A([Start Program]) --> B[/"Enter your fuel tank capacity of the car in gallons"/]
    B --> C[/Input fuel_capacity/]
    C --> D[/"Enter the number of miles per gallon the car can be driven"/]
    D --> E[/Input miles_per_gallon/]
    E --> F["Total miles= fuel_capacity * miles_per_gallon"]
    F --> G[/Total miles travel/]
    G --> H([End])
