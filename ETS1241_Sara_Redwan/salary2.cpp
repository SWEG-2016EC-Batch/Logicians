#include <iostream>
using namespace std;

int main() {
    double gross_salary, net_salary, working_hrs, tax, pension;
    double bonus = 0, basic_salary, overtime_bonus_rate, bonus_rate, tax_rate;
    
    cout << "Enter the basic salary in ETB: ";
    cin >> basic_salary;
    cout << "Enter the working hours: ";
    cin >> working_hrs;
    cout << "Enter the bonus rate: ";
    cin >> bonus_rate;
    
    if (working_hrs > 40) {
        cout << "Enter overtime bonus rate per hour: ";
        cin >> overtime_bonus_rate;
        bonus = (working_hrs - 40) * overtime_bonus_rate;
    }
    
    gross_salary = basic_salary + bonus;
    pension = basic_salary * 0.07;
    tax = 0;
    
    if (gross_salary <= 200) {
        tax_rate = 0;
    } else if (gross_salary <= 600) {
        tax_rate = 0.1; 
    } else if (gross_salary <= 1200) {
        tax_rate = 0.15;
    } else if (gross_salary <= 2000) {
        tax_rate = 0.20;
    } else if (gross_salary <= 3500) {
        tax_rate = 0.25;
    } else {
        tax_rate = 0.30;
    }
    
    tax = gross_salary * tax_rate;
    net_salary = gross_salary - pension - tax;
    
    cout << "Basic salary: " << basic_salary << " ETB\n";
    cout << "Working hours: " << working_hrs << "\n";
    cout << "Overtime bonus rate: " << overtime_bonus_rate << "\n";
    cout << "Net salary: " << net_salary << " ETB\n";

    return 0;
}
