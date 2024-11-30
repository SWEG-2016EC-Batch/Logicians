#include <iostream>‍
using namespace std;‍
int main(){‍
string name;‍
double wwh,br,bs,bp,pb,gs,ns,pd,td;‍
‍
‍
cout << "please eneter your  name\n" << endl;‍
cin >> name;‍
cout << "please enter your weekly working hour\n " << endl;‍
cin >> wwh;‍
cout << "please enter your bonus rate ber hour\n " << endl;‍
cin >> br;‍
cout << "please enter your base salary\n " << endl;‍
cin >> bs;‍
bp=br*wwh;‍
gs=bp+bs;‍
pd=0.05*gs;‍
td=0.15*gs;‍
ns=gs-(pd+td);‍
cout << "dear " <<name<< endl;‍
cout << "your gross salary adding your bonus payment is:" <<gs<< endl;‍
cout << "your net salary deducting pention and tax  is:" <<ns<< endl;‍
‍
‍
return 0;}
