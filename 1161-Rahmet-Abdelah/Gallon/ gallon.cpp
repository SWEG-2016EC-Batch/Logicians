#include <iostream>‍
using namespace std;‍
int mai(){
  ‍
int capacity;‍
float miles_per_galon;‍
float miles;‍
a:  
cout << "please enterthe amount of fuel your automobile can have: " << endl;}‍
cin>>capacity;‍
if(cin.fail()){
  cout<<"please enter a valid input"<<endl
    cin.clear();
    cin.ignore();
    goto a;
}
b:
cout << "please enter the miles you go per galon:" << endl;‍
cin>>miles_per_galon;‍
if(cin.fail()){
  cout<<"please enter a valid input"<<endl
    cin.clear();
    cin.ignore();
    goto b;
}
‍
miles=capacity*miles per galon;‍
cout << "The number of miles you can go with out refueuling is " <<miles<< endl;‍
‍
‍
return 0;}
