#include <iostream>
using namespace std;
int main()
{int number,sum=0;
start:
cout<<"Enter the number"<<endl;
cin>>number;
if(cin.fail()||number<=0){
    cout<<"your input is invalid please try to insert positive number\n";
    cin.clear();
    cin.ignore();
    goto start;
}
else{
for(int i=1;i<number;i++){
    if(number%i==0){
        sum+=i;
    }
}
if(sum==number){
    cout<<number<<" is perfect number "<<endl;
    
}
 else {
     cout<<number<<" is not perfect number\n";
 } }  

    return 0;
}
