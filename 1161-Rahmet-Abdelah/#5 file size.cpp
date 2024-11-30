#include <iostream>‍
using namespace std;‍
int main(){‍
float file_size,time,hour;‍
cout << "enter your file size in mb(only write the number)" << endl;‍
cin >> file_size;‍
file_size=file_size*1000000;‍
cout << "your file in bytes: " << file_size<<endl;‍
//960 char can be done in 1 second.‍
time=file_size/960;‍
cout << "your file will take " <<time<<" seconds to be executed" <<endl;‍
hour=time/3600;‍
cout << "in hour " <<hour<< endl;‍
‍
return 0;}
