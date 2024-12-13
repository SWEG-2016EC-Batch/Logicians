#include <iostream>
using namespace std;

int main()
{ int row,column;
cout<<"enter row\n";
cin>>row;
cout<<"enter row\n";
cin>>column;
   for(int i=1; i<=row;i++){
       for(int j=i;j<=column;j++){
           
           if(i==1||i==j  ||  j==1 || j==column)
           
           cout<<"*";
           
           else cout<<" ";
           
         
       }cout<<endl;
   }
   
    return 0;
}
