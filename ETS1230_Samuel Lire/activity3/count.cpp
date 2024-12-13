#include <iostream>
using namespace std;

int main()
{ int number,counter=0,n,last_digit;
cout <<"Insert Number"<<endl;
cin>>number;
if(number<0){
    number=-number;
}
n=number;
while(n>0){
    last_digit=n%10;
    n/=10;
    counter++;
}
if(number==0){
    counter=1;
}
cout<<"The number of digits of  "<<number<<" is: "<<counter<<endl;


    return 0;
} 
