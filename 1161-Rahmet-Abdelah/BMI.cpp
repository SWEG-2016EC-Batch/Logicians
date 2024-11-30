 #inlcude <iostream>
using namespace std;
int main(){
   double weight,height,BMI,person;  //declaring variables‍
‍
     //accepting input‍
    a:
    cout<<"for how many persons do you want to calculate the BMI "<<endl;‍
    cin>>person;‍
    if(cin.fail()){
      cout<<"please enter correct inuput"<<endl;
     cin.clear();
     cin.ignore();
     goto a;
    }
‍
    for(int i=1; i<=person; i++){
     ‍b:
    cout << "please enter your weight: " << endl;‍
    cin>>weight;‍
     if(cin.fail()){
      cout<<"please enter correct inuput"<<endl;
     cin.clear();
     cin.ignore();
     goto b;}
     c:
    cout << "please enter your height: " << endl;‍
    cin>>height;‍
     if(cin.fail()){
      cout<<"please enter correct inuput"<<endl;
     cin.clear();
     cin.ignore();
     goto c;}
    
‍
    height*=height;//we can use cmath library instead to do the power‍
    BMI=weight/height;‍
‍
‍
    cout<<"your BMI is "<<BMI<<endl;‍
‍
      if(BMI<18.5){‍
        cout<<"you are under weight"<<endl;‍
      }‍
     else if(BMI>=18.5 && BMI<=24.9){‍
        cout<<"you are normal weight"<<endl;}‍
     else i‍f(BMI>=24.9){
        cout<<"you are over weight "<<endl;‍
    }‍
    }
 ‍cout<<"you have finished your operation,run again if you want to do for more people"
‍
‍
    return 0;‍
}
