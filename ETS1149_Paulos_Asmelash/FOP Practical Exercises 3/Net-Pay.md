# Problem Analysis
### Inputs:

. Basic Salary

. Working Hours

. Bonus Rate

### Process:

Tax Rate Determination: Based on classification of the basic salary determines the applicable tax rate.

Bonus Calculation: If working hours exceed 40, the bonus is calculated based on extra hours and the given bonus rate.

Gross Salary Calculation: Sum of the basic salary and the bonus.

Pension Deduction: Calculated as 7% (pension_rate) of the basic salary.

Tax Deduction: Calculated as the tax rate applied to the gross salary.

Net Salary Calculation: Gross salary minus the sum of tax and pension deductions.

### Outputs:
Basic Salary: Displayed as input by the user.

Bonus: Displayed based on whether it is calculated or set to zero.

Gross Salary: Summation of the basic salary and the bonus.

Pension Deduction: Deduction amount calculated as 7% of the basic salary.

Tax Deduction: Calculated based on the tax rate and gross salary.

Net Salary: Final amount after all deductions.

# Pseudocode:
1. Start
2. Declare variables for basic_salary, working_hours, bonus_rate, gross_salary, bonus, pension, tax, net_salary, and initialize pension_rate = 0.07.
3. Prompt and read the user's basic_salary.
4. Determine the tax rate based on the basic_salary:
   - If basic_salary > 0 and <= 200, set tax_rate = 0.
   - Else if basic_salary > 200 and <= 600, set tax_rate = 0.1.
   - Else if basic_salary > 600 and <= 1200, set tax_rate = 0.15.
   - Else if basic_salary > 1200 and <= 2000, set tax_rate = 0.20.
   - Else if basic_salary > 2000 and <= 3500, set tax_rate = 0.25.
   - Else set tax_rate = 0.3.
5. Prompt and read the user's working_hours.
6. Check if working_hours >= 40:
   - If true, prompt and read bonus_rate.
   - Calculate bonus = (working_hours - 40) * bonus_rate.
   - Else set bonus = 0.
7. Calculate gross salary as gross_salary = basic_salary + bonus.
8. Calculate pension deduction as pension = basic_salary * pension_rate.
9. Calculate tax deduction as tax = gross_salary * tax_rate.
10. Calculate net salary as net_salary = gross_salary - (tax + pension).
11. Display outputs:
    - Basic salary, bonus, gross salary, pension deduction, tax deduction, and net salary.
12. End

# Flowchart
~~~mermaid
flowchart TD
    A([Start]) --> B[/Declare variables: basic_salary, working_hours, bonus_rate, gross_salary, bonus, pension, tax, net_salary/]
    B --> C[/Prompt and read basic_salary/]
    C --> D{Check basic_salary range}
    D -->|basic_salary <= 200| E[Set tax_rate = 0]
    D -->|basic_salary > 200 and <= 600| F[Set tax_rate = 0.1]
    D -->|basic_salary > 600 and <= 1200| G[Set tax_rate = 0.15]
    D -->|basic_salary > 1200 and <= 2000| H[Set tax_rate = 0.20]
    D -->|basic_salary > 2000 and <= 3500| I[Set tax_rate = 0.25]
    D -->|basic_salary > 3500| J[Set tax_rate = 0.3]
    E --> K[/Prompt and read working_hours/]
    F --> K
    G --> K
    H --> K
    I --> K
    J --> K
    K --> L{Check if working_hours >= 40}
    L -->|Yes| M[/Prompt and read bonus_rate/]
    L -->|No| N[Set bonus = 0]
    M --> O[Calculate bonus = working_hours - 40 * bonus_rate]
    O --> P[Calculate gross_salary = basic_salary + bonus]
    N --> P
    P --> Q[Calculate pension = basic_salary * 0.07]
    Q --> R[Calculate tax = gross_salary * tax_rate]
    R --> S[Calculate net_salary = gross_salary - tax + pension]
    S --> T[/Display results: basic_salary, bonus, gross_salary, pension, tax, net_salary/]
    T --> U([End])
