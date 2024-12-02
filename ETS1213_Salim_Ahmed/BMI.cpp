#include <iostream>
using namespace std;

int main()
{
   float body_weight,height,BMI;
   char num;
 
   do{
   a:
   cout<<"Enter your Body weight in kilogram."<<endl;
   cin>>body_weight;
     if (cin.fail() || body_weight<=0){
        cin.clear();
        cin.ignore();
        cout<<"Enter valid input"<<endl;
        goto a;
       }
   b:
   cout<<"Enter your height in Meter."<<endl;
   cin>>height;
   
   if (cin.fail() || height<=0){
        cin.clear();
        cin.ignore();
        cout<<"Enter valid input"<<endl;
        goto b;
      }
  
   height*=height;
   
   BMI=body_weight/height;
   
   cout<<"Your Body Mass Index is:"<<BMI<<endl;
   
   if(BMI<18){cout<<"Your are under weight\n";}
   else if(BMI<25){cout<<"Your are Normal weight\n";}
   else{cout<<"Your are Over weight\n";}
   
       cout<<"Do you want to continue?(Y/N):"<<endl;
       cin>>num;
   }while(num=='y'||num=='Y');

    return 0;
}
