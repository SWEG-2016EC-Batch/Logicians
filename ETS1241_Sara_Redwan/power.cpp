#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x, y ,result;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y: ";
    cin>>y;
    result=pow(x,y);
    cout<<x<<" raised to the power "<<y<<" is "<<result<<endl;
    return 0;
}
