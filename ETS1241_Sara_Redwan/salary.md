# Problem Statement :
Design an algorithm and write a program to read an employee's name, weekly working hours, bonus rate per hour, and base salary. Calculate the employee's gross salary, net salary, and bonus payment. The pension rate is 5%, and the tax rate is 15%.

###  Inputs:
- Employee's name
- Weekly working hours
- Bonus rate per hour
- Base salary

###  Outputs:
- Gross salary
- Net salary
- Bonus payment

### deductions
- Pension rate: 5%
- Tax rate: 15%

### operation:

1. Calculate the gross salary by multiplying the weekly working hours by the bonus rate and adding the base salary.
2. Calculate the pension deduction by multiplying the gross salary by the pension rate (5%).
3. Calculate the tax deduction by multiplying the gross salary by the tax rate (15%).
4. Calculate the net salary by subtracting the pension and tax deductions from the gross salary.
5. Calculate the bonus payment by multiplying the weekly working hours by the bonus rate.

# psedocode

Step1:start 

Step2:variable initialization

Step3:read the employees name,weelly working hour,bonus rate and base salary.

Step4:using the variables calculate the gross salary,net salary,and bonus payment

Step4.1:to find gross salary add the base salary with the bonus payment

Step4.2:deduct tax and pention from the gross salary

Step4.3:calculate the net salary

Step5 :print the results

Step6:end

# Flowchart

``` mermaid
graph TD
    A([Start Program]) --> B[/"Enter your name"/]
    B --> C[/Input name/]
    C --> D[/"Enter your weekly working hours"/]
    D --> E[/Input week_working_hour/]
    E --> F{is the input valid?}
    F -->|NO|G[/invalid input/]
    G -->M([end]) 
    F -->|Yes|I[/"Enter your bonus rate per hour"/]
    I --> J[/Input bonus_rate_per_hour/]
    J -->K{is the input valid?}
    K -->|NO|L[/"input is invalid"/]
    L -->M([end])
    K -->|Yes|N[/"Enter your base salary for a month"/]
    N -->O[/Input base_salary/]
    O --> P{is input valid?}
    P -->|NO|Q[/"input is invalid"/]
    Q -->M([end])
    P -->|Yes|R["Calculate bonus_payment = 4 * (week_working_hour * bonus_rate_per_hour)"]
    R -->S["Calculate gross_salary = base_salary + bonus_payment"]
    S --> V["Calculate pension = gross_salary * 0.05"]
    V --> W["Calculate tax = gross_salary * 0.15"]
    W --> X["Calculate net_salary = gross_salary - (tax + pension)"]
    X --> Y[/"Print 'Your name is: ' + name"/]
    Y --> Z[/"Print 'The total gross salary of the month is: ' + gross_salary"/]
    Z --> A1[/"Print 'The bonus payment of the month is: ' + bonus_payment"/]
    A1 --> B1[/"Print 'The pension deduction is: ' + pension"/]
    B1 --> C1[/"Print 'The tax deduction is: ' + tax"/]
    C1 --> D1[/"Print 'The total net salary of the month is: ' + net_salary"/]
    D1 --> E1([End])
