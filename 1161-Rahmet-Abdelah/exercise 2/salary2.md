## Problem analysis


### Input:
1. **Basic Salary**
2. **Working Hours**
3. **Bonus Rate**
4. **Overtime bouns rate**

### Process:
1. **Calculate Bonus:**
   - **Condition:** If `working_hrs` > 40
   - **Formula:** `bonus = (working_hrs - 40) * overtime_bonus_rate`
2. **Calculate Gross Salary:**
   - **Formula:** `gross_salary = basic_salary + bonus`
3. **Calculate Pension:**
   - **Formula:** `pension = basic_salary * 0.07`
4. **Determine Tax Rate Based on Gross Salary:**
   - If `gross_salary <= 200`, set `tax_rate = 0`
   - Else if `gross_salary <= 600`, set `tax_rate = 0.1`
   - Else if `gross_salary <= 1200`, set `tax_rate = 0.15`
   - Else if `gross_salary <= 2000`, set `tax_rate = 0.20`
   - Else if `gross_salary <= 3500`, set `tax_rate = 0.25`
   - Else, set `tax_rate = 0.30`

5. **Calculate Tax:**
   - **Formula:** `tax = gross_salary * tax_rate`

6. **Calculate Net Salary:**
   - **Formula:** `net_salary = gross_salary - pension - tax`

### Output:
1. **Display Basic Salary:**
2. **Display Working Hours:**
3. **Display Overtime Bonus Rate:**
4. **Display Net Salary:**

## Pseudocode

1. **Start**

2. **Input Basic Salary**
   - Print "Enter the basic salary in ETB: "
   - Read `basic_salary`

3. **Input Working Hours**
   - Print "Enter the working hours: "
   - Read `working_hrs`

4. **Input Bonus Rate**
   - Print "Enter the bonus rate: "
   - Read `bonus_rate`

5. **Process - Check for Overtime**
   - If `working_hrs` > 40 Then
       - Print "Enter overtime bonus rate per hour: "
       - Read `overtime_bonus_rate`
       - Set `bonus = (working_hrs - 40) * overtime_bonus_rate`
   - End If

6. **Process - Calculate Gross Salary**
   - Set `gross_salary = basic_salary + bonus`

7. **Process - Calculate Pension**
   - Set `pension = basic_salary * 0.07`

8. **Process - Decide Tax Rate**
   - If `gross_salary <= 200` Then
       - Set `tax_rate = 0`
   - Else If `gross_salary <= 600` Then
       - Set `tax_rate = 0.1`
   - Else If `gross_salary <= 1200` Then
       - Set `tax_rate = 0.15`
   - Else If `gross_salary <= 2000` Then
       - Set `tax_rate = 0.20`
   - Else If `gross_salary <= 3500` Then
       - Set `tax_rate = 0.25`
   - Else
       - Set `tax_rate = 0.30`
   - End If

9. **Process - Calculate Tax**
   -  `tax = gross_salary * tax_rate`

10. **Process - Calculate Net Salary**
    -  `net_salary = gross_salary - pension - tax`

11. **Output Results**
    - Print "Basic salary: ", `basic_salary`, " ETB"
    - Print "Working hours: ", `working_hrs`
    - Print "Overtime bonus rate: ", `overtime_bonus_rate`
    - Print "Net salary: ", `net_salary`, " ETB"

12. **End**


