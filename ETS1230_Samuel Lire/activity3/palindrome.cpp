#include <iostream>
using namespace std;

int main()
{ int number,reversed_number=0,remiander,n;
cout <<"Insert Number You wnat to be checked palindrome or not"<<endl;
cin>>n;
if(n<0){
 n=-n;
}
number=n;
while(number>0){
remiander=number%10;
reversed_number=(reversed_number)*10+(remiander);
number/=10;}
if(reversed_number==n){
cout<<n<<" is palindrome number "<<endl;
}
else{
  cout<<n<<" is not palindrome number "<<endl;  
}


    return 0;
}
