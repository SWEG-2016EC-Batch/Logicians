#include <iostream>
using namespace std;

int main()
{ int number,reversed_number=0,remiander,n;
cout <<"Insert Number You wnat to be reversed"<<endl;
cin>>n;
if(n<0){
    n=-n;
}
number=n;
while(number>0){
remiander=number%10;
reversed_number=(reversed_number)*10+(remiander);
number/=10;}
cout<<"your reversed number is: "<<reversed_number<<endl;
    

    return 0;
}
