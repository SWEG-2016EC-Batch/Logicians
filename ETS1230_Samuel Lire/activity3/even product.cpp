#include <iostream>
using namespace std;
int main()
{int number,n,product=1,reminder;
cout<<"Enter number"<<endl;
cin>>number;
if(number<0){
    number=-number;
}
n=number;
while(n>0){
    reminder=n%10;
    if(reminder%2==0){
       product*=reminder;
    }
    n/=10;
}cout<<"the product of even digit is: "<<product<<endl;

    return 0;
} 
