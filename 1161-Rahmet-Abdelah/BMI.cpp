 #inlcude <iostream>
using namespace std;
int main(){
   double weight,height,BMI,person;  //declaring variables‍
‍
     //accepting input‍
    cout<<"for how many persons do you want to calculate the BMI "<<endl;‍
    cin>>person;‍
‍
    for(int i=1; i<=person; i++){‍
    cout << "please enter your weight: " << endl;‍
    cin>>weight;‍
    cout << "please enter your height: " << endl;‍
    cin>>height;‍
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
    }‍
‍
‍
    return 0;‍
}
