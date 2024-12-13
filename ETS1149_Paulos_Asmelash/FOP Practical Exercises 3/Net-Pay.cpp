#include <iostream>
using namespace std;

int main () {
    float basic_salary, working_hours, bonus_rate; 
    float gross_salary, bonus, pension,tax, net_salary;
    float pension_rate = 0.07,tax_rate;

    a:
    cout << "Please enter your basic salary" << endl;
    cin >> basic_salary;

    if ((cin.fail()) || (basic_salary < 0)) {
        cin.clear();
        cin.ignore();
        cout << "Invalid input enter again" << endl;
        goto a;    
    } else if (basic_salary > 0 && basic_salary <= 200) {
        tax_rate = 0;
    } else if (basic_salary > 200 && basic_salary <= 600) {
        tax_rate = 0.1;
    } else if (basic_salary > 600 && basic_salary <= 1200) {
        tax_rate = 0.15;
    } else if (basic_salary > 1200 && basic_salary <= 2000) {
        tax_rate = 0.20;
    } else if (basic_salary > 2000 && basic_salary <= 3500) {
        tax_rate = 0.25;
    } else {
        tax_rate = 0.3;
    }

    cout << "Please enter how many hours you have worked" << endl;
    cin >> working_hours;
    
    if (working_hours >= 40) {
        cout << "Please enter your bouns rate per extra hours you worked" << endl;
        cin >> bonus_rate;
        bonus = (working_hours - 40) * bonus_rate;
    } else {
        bonus == 0;
    }

    gross_salary = basic_salary + bonus;
    pension= basic_salary * pension_rate;
    tax = gross_salary * tax_rate;
    net_salary = gross_salary - (tax + pension);
    
    cout << "\nYour basic salary is: " << basic_salary;
    cout << "\nYour bonus is: " << bonus;
    cout << "\nYour gross salary is: " << gross_salary;
    cout << "\nYour pension deduction is: " <<"-"<<pension;
    cout << "\nYour tax deduction is: " <<"-"<<tax;
    cout << "\nYour net salary is: " << net_salary;
    return 0;
}
