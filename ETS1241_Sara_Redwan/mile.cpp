#include<iostream>
using namespace std;
int main(){
    float tank_capacity, tank_efficiency,total_mile;
    cout<<"enter the tank capacity in gallon: ";
    cin>>tank_capacity;
    cout<<"enter the tank efficiency in mile per gallon: ";
    cin>>tank_efficiency;

    total_mile=tank_capacity*tank_efficiency;

    cout<<"The automobile can be driven without refueling "<<total_mile<<"mile" ;

    return 0;
}
