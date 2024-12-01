#include <iostream>
#include <cmath>
using namespace std;

int main()
{/* this code can sove the problem of power of the different number.*/ 
    float k=1,x,y;
    char j;
     cout <<"insert base"<<endl;
    cin>>x;
     cout <<"insert exponent"<<endl;
     cin>>y;
     if (y<=0){
         for(int i=y;i<0;i++){
       k*=1/x; 
    }}
     {
    for(int i=1;i<=y;i++){
       k*=x; 
    }}
cout<<x<<'^'<<y<<"="<<k<<endl;;
 
  
    return 0;
}
