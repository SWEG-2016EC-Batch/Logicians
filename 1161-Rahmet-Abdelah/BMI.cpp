#include <iostream>
using namespace std;
int main()
{
    float mass,height,bmi;
    char i;
    do{
    cout <<"Insert your mass in kilogram"<<endl;
    cin>>mass;
     cout <<"Insert your height in meters  "<<endl;
    cin>>height;
    height*=height;
    bmi=mass/height;
    cout <<"BMI="<<bmi<<endl;
    if (bmi<18.5){
     cout <<"Your are under weight"<<endl;
    }
    else if (bmi>=18.5 &&  bmi<=24.9)   {
     cout <<"Your are in normal weight"<<endl;
    }
    else if (bmi>=25 &&  bmi<=29.9)   {
     cout <<"Your are in over weight"<<endl;
    }
    else if (bmi>=30 )   {
     cout <<"Your are in obesity"<<endl;
    }
    cout <<"if you want to calculate for other people insert any character or to stop enter 0"
   <<endl;
   cin>>i;}
   while( i !='0');
    
    return 0;}

