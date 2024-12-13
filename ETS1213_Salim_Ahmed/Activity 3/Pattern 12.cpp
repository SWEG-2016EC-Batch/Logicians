 #include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=6;i++){
       
       for(int j=i;j<=6;j++){
           
         cout<<" ";}
       
       for(int j=1;j<=i;j++){
           
           if(i==1|| i==6 || j==1||j==i){
                 cout<<"* ";}
         
           else cout<<"  ";
         
       }cout<<endl;
   }
   
    return 0;
}
