#include <iostream>
using namespace std;
int main()
{
    double gross_salary,base_salary,bonus,net_salary,worked_hours,bonus_per_hour;
    double pension,tax,bonus_payment;
    double pension_rate=0.07,tax_rate;
   cout<<"Enter your base salary in ETB"<<endl;
   cin>>base_salary;
    cout<<"Enter your worked hours"<<endl;
   cin>>worked_hours;
   if (worked_hours>40){
     cout<<"Enter your  bonus per hour"<<endl;
    cin>>bonus_per_hour;
     bonus_payment=(worked_hours-40)*bonus_per_hour;
   }
   gross_salary=base_salary+bonus_payment;
   if (gross_salary<200){
       tax_rate=0;
   }
   else if (gross_salary>=200 && gross_salary<600){
       tax_rate=0.1;
   }
   else if (gross_salary>=600 && gross_salary<1200){
       tax_rate=0.15;
   }
   else if (gross_salary>=1200 && gross_salary<2000){
       tax_rate=0.2;
   }
   else if (gross_salary>=2000 && gross_salary<3500){
       tax_rate=0.25;
   }
   else {
    tax_rate=0.3;
   }
   pension=gross_salary*pension_rate;
   tax=gross_salary*tax_rate;
  
   net_salary=gross_salary-(pension+tax);
   cout<<"Your net pay is : "<<net_salary<<endl;

    return 0 ;
}

