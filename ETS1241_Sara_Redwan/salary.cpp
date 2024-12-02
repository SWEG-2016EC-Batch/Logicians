#include <iostream>
using namespace std;

int main()
{
   string name;
   int week_working_hour,base_salary;
   double tax_rate=0.15,pension_rate=0.05,bonus_rate_per_hour;
   
   cout<<"Enter your name"<<endl;
   cin>>name;
   
   a:
   cout<<"Enter your weekly working hours\n";
   cin>>week_working_hour;
   
   if (cin.fail() || week_working_hour<=0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input enter again"<<endl;
        goto a;
        }
   b:
   cout<<"Enter your bonus rate per hour\n";
   cin>>bonus_rate_per_hour;
     if (cin.fail() || bonus_rate_per_hour<=0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input enter again"<<endl;
        goto b;
        }
   
   c:
   cout<<"Enter your base salary of a month\n";
   cin>>base_salary;
   if (cin.fail() || bonus_rate_per_hour<=0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input enter again"<<endl;
        goto c;
        }
  
   double bonus_payment= 4*(week_working_hour*bonus_rate_per_hour); //We multiply by 4 to get monthly bonus payment
   double gross_salary= base_salary + bonus_payment;
   double pension= gross_salary*0.05;
   double tax= gross_salary*0.15;
   double  net_salary= gross_salary-(tax+pension);
   
   cout<<"Your name is:"<<name<<endl;
   cout<<"The total gross salary of the month is:"<<gross_salary<<endl;
   cout<<"The bonus payment of the month is:"<<bonus_payment<<endl;
   cout<<"The pension deduction is:-"<<pension<<endl;
   cout<<"The tax deduction is:-"<<tax<<endl;
   cout<<"The total net salary of the month is:"<<net_salary<<endl;

    return 0;
}
