#include <iostream>
using namespace std;

int main() {
    string employeename;
    float weekly_working_hours, base_salary, bonus_rate = 0.15, pension_rate = 0.05;
    float gross_salary, net_salary, bonus_payment;
    float pensiondeduction, taxdeduction;

    cout << "Enter the name of the employee: ";
    cin >> employeename;
    
    cout << "Enter the weekly working hours: ";
    cin >> weekly_working_hours;

    cout << "Enter the base salary: ";
    cin >> base_salary;

    cout << "Enter the bonus rate: ";
    cin >> bonus_rate;
    
    bonus_payment = weekly_working_hours * bonus_rate;
    gross_salary = base_salary + bonus_payment;
    pensiondeduction = pension_rate * gross_salary;
    taxdeduction = 0.15 * gross_salary;
   
    net_salary = gross_salary - (pensiondeduction + taxdeduction);
    cout << "Employee Name: " << employeename << endl;
    cout << "Bonus payment: " << bonus_payment << endl;
    cout << "Gross salary: " << gross_salary << endl;
    cout << "Net salary: " << net_salary << endl;

    return 0;
}
