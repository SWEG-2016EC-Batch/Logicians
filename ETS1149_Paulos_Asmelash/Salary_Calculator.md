# Problem Analysis

### Input:
• Employee name

• Weekly working hours

• Base salary

• Bonus rate per hour

### Process:

Calculate the monthly bonus payment: bonus payment = (Weekly working hours * bonus rate) * 4

Calculate the gross salary: gross salary = base salary + bonus payment

Calculate the pension deduction: pension = gross salary*0.05

Calculate the tax deduction: tax = gross salary*0.15

Calculate the net salary: net salary = gross salary - (pension + tax)

### Output:

• Employee name

• Bonus payment

• Pension deducted

• Tax deducted

• Gross salary

• Net salary

# Algorithm:

Step 1: Start the program.

Step 2: Print "Enter your name"

Step 3: Input `name` from the user

Step 4: Print "Enter your weekly working hours"

Step 5: Input `week_working_hour` from the user

Step 6: Print "Enter your bonus rate per hour"

Step 7: Input `bonus_rate_per_hour` from the user

Step 8: Print "Enter your base salary for a month"

Step 9: Input `base_salary` from the user

Step 10: Calculate bonus_payment as: bonus_payment = 4 * (week_working_hour * bonus_rate_per_hour)

Step 11: Calculate gross_salary as: gross_salary = base_salary + bonus_payment

Step 12: Calculate pension as: pension = gross_salary * 0.05

Step 13: Calculate tax` as: tax = gross_salary * 0.15

Step 14: Calculate net_salary` as: net_salary = gross_salary - (tax + pension)

Step 15: Print "Your name is:  `name`

step 16: Print "The total gross salary of the month is:  `gross_salary`

Step 17: Print "The bonus payment of the month is:  `bonus_payment`

Step 18: Print "The pension deduction is:  `pension`

Step 19: Print "The tax deduction is: `tax`

Step 20: Print "The total net salary of the month is: `net_salary`

Step 21: End the program.

# Flowchart

``` mermaid
graph TD
    A([Start Program]) --> B[/"Enter your name"/]
    B --> C[/Input name/]
    C --> D[/"Enter your weekly working hours"/]
    D --> E[/Input week_working_hour/]
    E --> F[/"Enter your bonus rate per hour"/]
    F --> G[/Input bonus_rate_per_hour/]
    G --> H[/"Enter your base salary for a month"/]
    H --> I[/Input base_salary/]
    I --> J["Calculate bonus_payment = 4 * (week_working_hour * bonus_rate_per_hour)"]
    J --> K["Calculate gross_salary = base_salary + bonus_payment"]
    K --> L["Calculate pension = gross_salary * 0.05"]
    L --> M["Calculate tax = gross_salary * 0.15"]
    M --> N["Calculate net_salary = gross_salary - (tax + pension)"]
    N --> O[/"Print 'Your name is: ' + name"/]
    O --> P[/"Print 'The total gross salary of the month is: ' + gross_salary"/]
    P --> Q[/"Print 'The bonus payment of the month is: ' + bonus_payment"/]
    Q --> R[/"Print 'The pension deduction is: ' + pension"/]
    R --> S[/"Print 'The tax deduction is: ' + tax"/]
    S --> T[/"Print 'The total net salary of the month is: ' + net_salary"/]
    T --> U([End])
