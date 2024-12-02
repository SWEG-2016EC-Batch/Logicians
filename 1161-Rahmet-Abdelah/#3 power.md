# Problem Analysis‍
‍The goal of the program is to calculate the power of a number  x  raised to  y  (i.e.,  xʸ ). The program should take two inputs from the user: the base  x  and the exponent  y . The output should be the result of  xʸ .‍
‍
## 1. Input:‍
‍  Base  x  
  Exponent  y  
   ‍
## 2. Output:‍
‍   The result of  xʸ .‍
‍
## 3. operation
   do the operation base the power of exponent,using cmath library pow(base,exponent)


# psedocode

Step 1:start

Step 2:variable initialization

Step 3:accept and read the input

Step 4:power the first number by the second number(you can use cmath library)

Step 5:print the result

Step 6:end

## Flowchart
``` mermaid
flowchart 
    A([Start]) --> B[/enter the base number and store it in x/]
    B --> C{is input valid?}
    C -->|NO|D[/please enter valid input/]
    C -->|Yes|E[/enter the exponent and store it in y/]
    E --> F{is input valid?}
    F -->|NO|G[/please enter valid input/]
    F -->|Yes|H[Calculate x raised to the power y using the pow function and store it in result]
    H --> I[/Display the result/]
    I --> J([End])
