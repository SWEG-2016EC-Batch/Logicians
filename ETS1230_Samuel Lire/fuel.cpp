#include <iostream>
typedef double c;
using namespace std;

int main() {
    c  capacity_in_gallon,total_mile;
    c  mile_in_Pergallon;
    cout << "Insert the capacity of the fuel tank in gallons"<<endl;
    cin >> capacity_in_gallon;

    cout << "Insert the miles per gallon  the automobile can drive"<<endl;
    cin >> mile_in_Pergallon;
    total_mile= (capacity_in_gallon* mile_in_Pergallon);
    cout << "The automobile can be driven " << total_mile << " miles without refueling." << endl;

    return 0;
}
