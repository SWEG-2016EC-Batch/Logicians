#include <iostream>
using namespace std;
int main()
{int number,n
,factorial=1,reminder,sum=0;
  start:
cout<<"Enter number"<<endl;
cin>>number;
if(number<0||cin.fail()){
    cout<<"your input is invalid please try to insert valid input"<<endl;
    cin.clear();
    cin.ignore();
    goto start;
}
n=number;
while(n>0){
    factorial=1;
    reminder=n%10;
    if(reminder==0 || reminder==1){
        factorial=1;
    }else{
    for(int i=1;i<=reminder;i++){
     factorial*=i;   
    }}
    sum+=factorial;
     n/=10;
}
if(sum==number){
    cout<<number<<" is srong number"<<endl;
}
else{
  cout<<number<<" is not srong number"<<endl;  
}
    return 0;
} 
