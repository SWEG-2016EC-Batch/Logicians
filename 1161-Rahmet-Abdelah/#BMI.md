# problem analysis


# psedocode

Step 1:start.

Step 2:variable initialization

Step 3:read positive  integer  number both weight and height,and ask for how many person to do it

Step 4:find the BMI 

Step 4.1:declare BMI

      Step 4.2:find h*h

     Step 4.3: divide the weight by the height square

     Step 4.4:store the value in the variable BMI 

     Step 4.5:check if the BMI
           Step 4.5.1:is greater than 18.5 and <24.9, print normalweight

           Step 4.5.2:is lesser than 18.5 print under weight
           Step 4.5.3:if  greater than 24.9  print over weight posture

Step5:repeat until it meets the number of persons

Step 7:end;

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