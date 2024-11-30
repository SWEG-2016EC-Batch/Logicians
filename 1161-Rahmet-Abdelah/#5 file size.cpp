#include <iostream>‍
using namespace std;‍
int main(){‍
float file_size,time,hour;//declaring variables‍
  a:
cout << "enter your file size in mb(only write the number)" << endl;‍
cin >> file_size;‍
if(cin.fail()){‍
   cout << "please input valid number" << endl;‍
cin.clear();‍
cin.ignore();
goto a;}‍
   //converting megabytea to bytes‍
file_size=file_size*1000000;‍
cout << "your file in bytes is: " << file_size<<endl;‍
‍
   //960 char can be done in 1 second.since char takes 1 byte.‍
time=file_size/960;‍
cout << "your file will take " <<time<<" seconds to be executed" <<endl;‍
hour=time/3600;‍
cout << "in hours it will take  " <<hour <<"hours"<< endl;‍
‍
return 0;}
