 # Problem Analysis

 ### Input:
 . Weight (in kilograms)

. Height (in meters)

### Process:
Calculate BMI using the formula: BMI= w/(height*height).

Determine the weight category based on BMI:

Underweight: BMI < 18.4

Normal weight: 18.4 ≤ BMI < 24.9

Overweight: BMI >= 24.9

### Output:
BMI and Weight category (underweight, normal weight, overweight)

# Algorithm

Step 1: Start the program.

Step 2: Declare: body weight, height, BMI, num.

Step 3: Repeat the following until num is 'y':

   Step 3.1: Print "Enter your body weight in kilograms"
 
   Step 3.2: Input body weight

   Step 3.3: Print "Enter your height in meters"

   Step 3.4: Input height

   Step 3.5: Calculate BMI as BMI = body weight / (height * height)

   Step 3.6: Print "Your Body Mass Index is: BMI"

     Step 3.6.1: If BMI < 18.4, print "You are under weight"

     Step 3.6.2: Else if BMI < 24.9, print "You are normal weight"

     Step 3.6.3: Else, print "You are over weight"

Step 3.7: Print "Do you want to continue? [y:n]."

    Step 3.7.1: Input num

Step 4: If num is !=y

Step 5: End

# Flowchart
``` mermaid
graph TD
    A([Start program]) --> B[/Declare:body weight,height,BMI,num/]
    B --> C[Repeat until num is 'y']
    C --> D[/"Enter your body weight in kilogram"/]
    D --> E[/Input body weight/]
    E --> F[/"Enter your height in meters"/]
    F --> G[/Input height/]
    G --> H["BMI =body weight /height^2"]
    H --> I[/"Your Body Mass Index: BMI"/]
    I --> J{Is BMI < 18.4?}
    J -->|Yes| K[/"You are under weight"/]
    J -->|No| L{Is BMI < 24.9?}
    L -->|Yes| M[/"You are normal weight"/]
    L -->|No| N[/"You are over weight"/]
    K --> O["Do you want to continue?[y:n]"]
    M --> O
    N --> O
    O --> P[/Input num/]
    P --> Q{Is num == 'y'?}
    Q -->|No| R([End])
    Q -->|Yes| C