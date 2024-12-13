 #include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=6;i++){
       for(int j=i;j<=6;j++){
           
           if(i==1||i==j  ||  j==1 || j==6)
           
           cout<<"*";
           
           else cout<<" ";
           
         
       }cout<<endl;
   }
   
    return 0;
}
