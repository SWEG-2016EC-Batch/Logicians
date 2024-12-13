#include <iostream>
using namespace std;
int main()
{int number,first_digit,last_digit;
cout<<"enter the number\n";
cin>>number;
last_digit=number%10;
while(number>10){
    number/=10;
}
first_digit=number;
cout<<"The first digit is: "<<first_digit<<endl;
cout<<"The last digit is: "<<last_digit<<endl;
cout<<"The sum of last digit and first digit is: "<<last_digit+first_digit<<endl;
  
  

    return 0;
}
