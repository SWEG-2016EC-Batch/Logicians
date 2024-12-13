#include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=5;i++){
       for(int j=i;j<5;j++){
          cout<<"  ";}
           for(int j=i;j>=1;j--){
          cout<<" "<<j;
       }cout<<endl;
   }
   
    return 0;
}
