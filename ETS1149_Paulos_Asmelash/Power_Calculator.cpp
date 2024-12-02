#include <iostream>

using namespace std;
int main()
{
   double x,k=1;
   int y;
   
   a:
   cout<<"Enter the base number\n";
   cin>>x;
   if (cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input just enter numbers only"<<endl;
        goto a;
        }
   b:
   cout<<"Enter the exponent number\n";
   cin>>y;
  if (cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input just enter numbers only"<<endl;
        goto b;
        }
   if(y>0){
   for(int i=1;i<=y;i++){ 
       k*=x;
   }cout<<"The result of the given number is "<<x<<"^"<<y<<"="<<k<<endl;}
   
   else if(y<0){
        for(int i=1;i<=-y;i++){ 
       k*=x;}
       cout<<"The result of the given number is "<<x<<"^"<<y<<"="<<"1/"<<k<<endl;
  }
   

    return 0;
}
