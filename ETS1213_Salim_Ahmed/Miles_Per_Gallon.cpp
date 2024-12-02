#include <iostream>
using namespace std;

int main()
{
    float fuel_capacity,miles_per_gallon,Total_miles_travel;
    
    a:
    cout<<"Enter your fuel tank capacity of the car in gallon"<<endl;
    cin>>fuel_capacity;
    if (cin.fail() || fuel_capacity<=0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input enter again"<<endl;
        goto a;
        }
    b:
    cout<<"Enter the number of miles per gallon the car be driven"<<endl;
    cin>>miles_per_gallon;
    if (cin.fail() || miles_per_gallon<=0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input enter again"<<endl;
        goto b;
       }
    
    Total_miles_travel= fuel_capacity*miles_per_gallon;
    
    cout<<"The car can be driven without refueling: "<<Total_miles_travel<<"Miles"<<endl;

    return 0;
}
