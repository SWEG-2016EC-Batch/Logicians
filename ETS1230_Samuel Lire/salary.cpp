#include <iostream>
typedef double d;
using namespace std;
int main() {
    string name ;
    d weekly_working_hours;
    d bonus_rate_per_hour;
    d base_salary;
    d gross_salary;
    d net_salary;
    d bonus_payment;
    d pension;
    d tax;
    char ch;
    float pension_rate=0.05,tax_rate= 0.15;
    do{ 
    cout <<"Enter the first name of employee"<<endl;
 cin>>name; 
 cout <<"Enter the middle name of employee"<<endl;
 cin>>name; 
 cout <<"Enter the last name of employee"<<endl;
 cin>>name; 
 cout <<"Enter  employee weekly working hours"<<endl;
 cin>>weekly_working_hours; 
     if (  weekly_working_hours>50){ 
     cout <<"Enter  bonus rate per hour"<<endl;
     cin>>bonus_rate_per_hour;
     bonus_payment=(weekly_working_hours-50)*bonus_rate_per_hour;
     }
     cout <<"Enter  employee weekly base salary"<<endl;
     cin >>base_salary;
     gross_salary=(base_salary +bonus_payment);
     tax=(gross_salary)*tax_rate;
      pension=(gross_salary)*pension_rate;
      net_salary=gross_salary-(tax+pension);
      cout <<"employee weekly bonus  payment is: "<< bonus_payment <<endl;
      cout <<"employee weekly gross salary is: "<< gross_salary<<endl;
      cout <<"employee weekly net payment is: "<< net_salary<<endl;
      cout << "If you continoue other employees enter lower case c or any character to stop" <<endl;
   cin>>ch;} while(ch=='c');    
      return 0;

}
