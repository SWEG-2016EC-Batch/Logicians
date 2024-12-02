# Problem Statement :
Design an algorithm and write a program to read an employee's name, weekly working hours, bonus rate per hour, and base salary. Calculate the employee's gross salary, net salary, and bonus payment. The pension rate is 5%, and the tax rate is 15%.

Inputs:
- Employee's name
- Weekly working hours
- Bonus rate per hour
- Base salary

Outputs:
- Gross salary
- Net salary
- Bonus payment

deductions
- Pension rate: 5%
- Tax rate: 15%

operation:

1. Calculate the gross salary by multiplying the weekly working hours by the bonus rate and adding the base salary.
2. Calculate the pension deduction by multiplying the gross salary by the pension rate (5%).
3. Calculate the tax deduction by multiplying the gross salary by the tax rate (15%).
4. Calculate the net salary by subtracting the pension and tax deductions from the gross salary.
5. Calculate the bonus payment by multiplying the weekly working hours by the bonus rate.

psedocode

Step1:start
Step2:variable initialization
Step3:read the employees name,weelly working hour,bonus rate and base salary.
Step4:using the variables calculate the gross salary,net salary,and bonus payment
Step4.1:to find gross salary add the base salary with the bonus payment
Step4.2:deduct tax and pention from the gross salary
Step4.3:calculate the net salary
Step5 :print the results
Step6:end
