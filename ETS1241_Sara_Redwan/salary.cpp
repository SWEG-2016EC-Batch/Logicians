#include <iostream>‍
using namespace std;‍
int main(){‍
string name;‍
double weekly_working_hour,bonus_rate,base_salary,bonus_payment;
double  pension_deduction,gross_salry,net_salary,tat_deduction;‍
‍
‍
cout << "please eneter your  name\n" << endl;‍
cin >> name;‍
a:
cout << "please enter your weekly working hour\n " << endl;‍
cin >> weekly_working_hour;‍
  if(cin.fail()){
    cout<<"input valid input"<<endl;
    cin.clear();
    cin.ignore();
    goto a;
  }
b:
cout << "please enter your bonus rate ber hour\n " << endl;‍
cin >> bonus_rate;‍
   if(cin.fail()){
    cout<<"input valid input"<<endl;
    cin.clear();
    cin.ignore();
    goto b;

  c:
cout << "please enter your base salary\n " << endl;‍
cin >> base_salary;‍

 if(cin.fail()){
    cout<<"input valid input"<<endl;
    cin.clear();
    cin.ignore();
    goto c;
   
bonus_payment=bonus_rate*weekly_working_hour;‍
gross_salary=bonus_payment+base_salary;‍
   
pension_deduction=0.05*gross_salary;‍
tax_deduction=0.15*gross_salary;‍
   
net_salary=gross_salry-(pension_deduction+tax_deduction);‍
   
cout << "dear " <<name<< endl;‍
cout << "your gross salary adding your bonus payment is:" <<gross_salary<< endl;‍
cout << "your net salary deducting pention and tax  is:" <<net_salary<< endl;‍
‍
‍
return 0;}
