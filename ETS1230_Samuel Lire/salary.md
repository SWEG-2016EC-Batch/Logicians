# Problem Analysis
## Inputs:
Employee Name (first, middle, and last):

The program asks for three separate name inputs, though only the final input is stored in the variable name (overwriting the previous values).
Weekly Working Hours:

This input specifies the number of hours the employee worked in a week.
Bonus Rate per Hour:

If the employee works more than 50 hours a week, the program prompts for the bonus rate per hour worked beyond 50 hours.
Base Salary:

This input represents the employee's weekly base salary.
## Outputs:
Weekly Bonus Payment:

If the employee worked more than 50 hours, the bonus payment is calculated based on the extra hours worked and the bonus rate per hour.


If the employee worked 50 or fewer hours, there is no bonus payment.

Weekly Gross Salary:

The gross salary is the sum of the base salary and any applicable bonus payment.

Weekly Net Payment:

The net salary is calculated by subtracting the pension contribution and the tax from the gross salary. The tax rate is 15%, and the pension contribution rate is 5%
.
Repeatability:

After processing one employee, the program allows for entering the details of another employee, continuing until the user opts to stop by entering a character other than 'c'.

## Process:
The program first takes in the name of the employee (though only the last name is ultimately used).

It then asks for the employee’s weekly working hours and checks if the hours exceed 50. If they do, the bonus rate is taken as input and the bonus payment is calculated based on the extra hours worked.

The employee’s base salary is then taken as input, and the gross salary is computed by adding the bonus (if any)
.
The tax and pension are calculated from the gross salary using predefined rates (tax rate = 15% and pension rate = 5%).

Finally, the net salary is calculated by subtracting both the tax and pension from the gross salary.

The details of the bonus payment, gross salary, and net salary are displayed.

The user is asked if they want to input details for another employee. If they enter 'c', the process repeats; otherwise, the program ends.
 # B pseudo code
 
       1.START
       
      2. DECLARE variables:
      
        name as string
        
        weekly_working_hours, bonus_rate_per_hour, base_salary, gross_salary, net_salary, bonus_payment, pension, tax as double
        
        ch as character
        
        pension_rate as float initialized to 0.05
        
        tax_rate as float initialized to 0.15

     3 REPEAT
     
       4. PRINT "Enter the first name of employee"
       
        5.INPUT name

        6.PRINT "Enter the middle name of employee"
        
        INPUT name

       7. PRINT "Enter the last name of employee"
       
        8.INPUT name

        9.PRINT "Enter employee weekly working hours"
        
        10.INPUT weekly_working_hours

        11.IF weekly_working_hours > 50 THEN
        
            11.1.PRINT "Enter bonus rate per hour"
            
            11.1.INPUT bonus_rate_per_hour
            
            11.2.bonus_payment = (weekly_working_hours - 50) * bonus_rate_per_hour
        12.ELSE
        
            12.1.bonus_payment = 0

        13.PRINT "Enter employee weekly base salary"
        
        14.INPUT base_salary

        15.gross_salary = base_salary + bonus_payment

        16.tax = gross_salary * tax_rate
        
       17. pension = gross_salary * pension_rate
       
        18.net_salary = gross_salary - (tax + pension)

        19.PRINT "Employee weekly bonus payment is: " + bonus_payment
        
        20.PRINT "Employee weekly gross salary is: " + gross_salary
        
        21.PRINT "Employee weekly net payment is: " + net_salary

        22.PRINT "If you continue with other employees, enter 'c'. Enter any other character to stop."
        
        23.INPUT ch
        
        24.UNTIL ch is not equal to 'c'

         25.END
 # C flowchart
 ```mermaid
graph TD
  A([START]) --> B[DECLARE variables]
  B --> C[REPEAT]
  C --> D[/"Enter the first name of employee"/]
  D --> E[/INPUT name/]
  E --> F[/"Enter the middle name of employee"/]
  F --> G[/INPUT name/]
  G --> H[/"Enter the last name of employee"/]
  H --> I[/INPUT name/]
  I --> J[/"Enter employee weekly working hours"/]
  J --> K[/INPUT weekly_working_hours/]
  K --> L{weekly_working_hours > 50?}
  L --> |Yes| M[/"Enter bonus rate per hour"/]
  M --> N[/INPUT bonus_rate_per_hour/]
  N --> O["Calculate bonus payment"]
  L --> |No| P["No bonus payment"]
  P --> Q[/"Enter employee weekly base salary"/]
  Q --> R[/INPUT base_salary/]
  R --> S["Calculate gross salary"]
  S --> T["Calculate tax"]
  T --> U["Calculate pension"]
  U --> V["Calculate net salary"]
  V --> W[/"Employee weekly bonus payment is shown"/]
  W --> X[/"Employee weekly gross salary is shown"/]
  X --> Y[/"Employee weekly net payment is shown"/]
  Y --> Z[/"If you continue with other employees, enter 'c'. Enter any other character to stop."/]
  Z --> AA[/INPUT ch/]
  AA --> AB{ch != 'c'?}
  AB --> |Yes| C
  AB --> |No| AC([END])
