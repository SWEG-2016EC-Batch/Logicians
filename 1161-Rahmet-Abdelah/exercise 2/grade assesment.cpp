
#include<iostream>
using namespace std;
int main(){
    float test,quiz,project,assignment,final;
    int choice;
    do{a:
    cout<<"enter your test result out of 15"<<endl;
    cin>>test;
    if(cin.fail()|| test>15){
        cout<<"invalid input ,please enter your result out of 15"<<endl;
        cin.clear();
        cin.ignore();
        goto a;
    }
    b:
    cout<<"enter your quiz result out of 5"<<endl;
    cin>>quiz;
     if(cin.fail()|| quiz>5){
        cout<<"invalid input ,please enter your result out of 5"<<endl;
        cin.clear();
        cin.ignore();
        goto b;
    }
    c:
    cout<<"enter your project result out of 20"<<endl;
    cin>>project;
     if(cin.fail()|| project>20){
        cout<<"invalid input ,please enter your result out of 20"<<endl;
        cin.clear();
        cin.ignore();
        goto c;
    }
    d:
    cout<<"enter your assignment result out of 10"<<endl;
    cin>>assignment;
     if(cin.fail()|| assignment>10){
        cout<<"invalid input ,please enter your result out of 10"<<endl;
        cin.clear();
        cin.ignore();
        goto d;
    }
    e:
    cout<<"enter your final result out of 50"<<endl;
    cin>>final;
     if(cin.fail()|| final>50){
        cout<<"invalid input ,please enter your result out of 50"<<endl;
        cin.clear();
        cin.ignore();
        goto e;
    }
    float total_mark=test+quiz+project+assignment+final;
    cout<<"your total mark is "<<total_mark<<endl;
    
    if(total_mark>=90 && total_mark<=100){
        cout<<"your grade is A+";
    }
    else if(total_mark>=80 && total_mark<90){
        cout<<"your grade is A";
    }
    else if(total_mark>=75 && total_mark<80){
        cout<<"your grade is B+";
    }
    else if(total_mark>=60 && total_mark<75){
        cout<<"your grade is B";
    }
    else if(total_mark>=55 && total_mark<60){
        cout<<"your grade is C+";
    }
    else if(total_mark>=45 && total_mark<55){
        cout<<"your grade is C";
    }
    else if(total_mark>=30 && total_mark<45){
        cout<<"your grade is D";
    }
    else if(total_mark<30){
        cout<<"your grade is F";
    }
    else{
        cout<<"incorrect input ";
    }

    cout<<" if you want to continue  type any number and to terminate enter 0"<<endl;
    
    cin>>choice;
    }while(choice != 0);

    return 0;


}
