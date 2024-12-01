
# Problem Analysis

 ### Input:
 . Weight (in kilograms)

. Height (in meters)

### Process:
Calculate BMI using the formula: BMI= w/(h*h).

Determine the weight category based on BMI:

Underweight: BMI < 18.5

Normal weight: 18.5 ≤ BMI < 24.9

Overweight: 25<=BMI <= 29.9
obesity: >= 30


### Output:
BMI and Weight category (underweight, normal weight, overweight,obsetiy)

# Algorithm

Step 1: Start the program.

Step 2: declear: body weight, height, BMI, i.

Step 3: Repeat the following until i is not'0':

   Step 3.1: Print "Enter your mass in kilograms"
 
   Step 3.2: Input body weight

   Step 3.3: Print "Enter your height in meters"

   Step 3.4: Input height

   Step 3.5: Calculate BMI as BMI = body weight / (height * height)

   Step 3.6: Print "Your Body Mass Index is: BMI"

     Step 3.6.1: If BMI < 18, print "You are in under weight"

     Step 3.6.2: Else if BMI <= 24.9, print "You are in normal weight"

     Step 3.6.3: Else if BMI <= 29.9, , print "You are over weight"
     Step 3.6.4: Else  print"You are in obesity"

Step 3.7:if you want to calculate for othe people insert any character or to stop enter 0"

    Step 3.7.1: Input i

Step 4: If i is not equal to 0

Step 5: End

# Flowchart
``` mermaid
graph TD;
    A([Start the program]) --> B[/Declare variables: body_weight, height, BMI, i/]
    B --> C[Repeat the following until i is 0]
    
    C --> D[/Print 'Enter your mass in kilograms'/]
    D --> E[/Input body_weight/]
    E --> F[/Print 'Enter your height in meters'/]
    F --> G[/Input height/]
    G --> H[Calculate BMI]
    H --> I[/Print 'Your Body Mass Index is: '/]
    
    I --> J[Display BMI calculation]
    
    I --> K{Is BMI < 18?}
    K -->|Yes| L[/Print 'You are underweight'/]
    K -->|No| M{Is BMI <= 24.9?}
    
    M -->|Yes| N[/Print 'You are in normal weight'/]
    M -->|No| O{Is BMI <= 29.9?}
    
    O -->|Yes| P[/Print 'You are overweight'/]
    O -->|No| Q[/Print 'You are in obesity'/]
    
    L --> R[/Ask for next input: 'If you want to calculate for another person, enter any character; to stop, enter 0'/]
    N --> R
    P --> R
    Q --> R
    
    R --> S[/Input i/]
    S --> T{Is i != 0?}
    
    T -->|Yes| C
    T -->|No| U([End the program])
