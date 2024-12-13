#include <iostream>
using namespace std;

int main()
{ int row,column;
cout<<"enter the row\n";
cin>>row;
cout<<"enter the column\n";
cin>>column;

   for(int i=1; i<=row;i++){
       for(int j=i;j<column;j++){
          cout<<"  ";}
           for(int j=i;j>=1;j--){
          cout<<" "<<j;
       }cout<<endl;
   }
   
    return 0;
}
