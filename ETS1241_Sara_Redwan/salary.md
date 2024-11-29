The program calculates an employee's net salary after accounting for bonuses, pensions, and tax deductions based on their
weekly working hours and base salary.

Input:
The employee's name.
Weekly working hours.
Base salary.
Bonus rate.
Process: 
Calculate the bonus payment: bonus_payment = weekly_working_hours * bonus_rate
Calculate the gross salary: gross_salary = base_salary + bonus_payment
Calculate the pension deduction: pensiondeduction = 0.05 * gross_salary
Calculate the tax deduction: taxdeduction = 0.15 * gross_salary
Calculate the net salary: net_salary = gross_salary - (pensiondeduction + taxdeduction)
Output:
The employee's name,
The bonus payment,
The gross salary,
The net salary,

Algorithm Design
step 1: Start:
step 2: Input:
Prompt the user for the employee's name and store it in employeename.
Prompt the user for the weekly working hours and store it in weekly_working_hours.
Prompt the user for the base salary and store it in base_salary.
Prompt the user for the bonus rate and store it in bonus_rate.
step 3: Process :
Calculate bonus_payment = weekly_working_hours * bonus_rate.
Calculate gross_salary = base_salary + bonus_payment.
Calculate pensiondeduction = 0.05 * gross_salary.
Calculate taxdeduction = 0.15 * gross_salary.
Calculate net_salary = gross_salary - (pensiondeduction + taxdeduction).
step 4: print output:
Print the employee's name.
Print the bonus payment.
Print the gross salary.
Print the net salary.
step 5: End:
