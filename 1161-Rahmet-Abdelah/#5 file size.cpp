#include <iostream>
using namespace std;

int main()
{
    int transmission_rate=960,totaltime_taken_sec;
    double file_size;
    
    a:
    cout<<"Enter the amount of your file in Megabyte"<<endl;
    cin>>file_size;
    if (cin.fail() || file_size<=0){
        cin.clear();
        cin.ignore();
        cout<<"Invalid input enter again"<<endl;
        goto a;
        }
  
    file_size*=1048576; //to get the total number of bytes
    
    totaltime_taken_sec=file_size/transmission_rate;
    
    int days= totaltime_taken_sec/86400;
    totaltime_taken_sec= totaltime_taken_sec%86400;
    int hour= totaltime_taken_sec/3600;
    totaltime_taken_sec= totaltime_taken_sec%3600;
    int minute= totaltime_taken_sec/60;
    int seconds= totaltime_taken_sec%60;
    
    cout<<"This file is needed ="<<days<<"days: "<<hour<<"hour: "<<minute<<"minute: "<<seconds<<"seconds. "<<"To be fully sented"<<endl;
    

    return 0;
}
