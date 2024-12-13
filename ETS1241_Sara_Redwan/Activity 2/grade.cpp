#include<iostream>
using namespace std;
int main(){
    float test,quiz,project,assignment,final_exam,total_mark;

    a:
    cout<<"enter the mark of test(out of 15): ";
    cin>>test;
    if(cin.fail() || test>15 || test<0){
      cout<<"your input is invalid please try to insert valid number"<<endl;
      cin.clear();
      cin.ignore();
      goto a;
    }

    b:
    cout<<"enter the mark of quiz(out of 5): ";
    cin>>quiz;
     if(cin.fail() || quiz>5 || quiz<0){
      cout<<"your input is invalid please try to insert valid number"<<endl;
      cin.clear();
      cin.ignore();
      goto b;}

      c:
    cout<<"enter the mark of project(out of 20): ";
    cin>>project;
     if(cin.fail() || project>20 || project<0){
      cout<<"your input is invalid please try to insert valid number"<<endl;
      cin.clear();
      cin.ignore();
      goto c;}

      d:
    cout<<"enter the mark of assignment(out of 10): ";
    cin>>assignment;
     if(cin.fail() || assignment>10 || assignment<0){
      cout<<"your input is invalid please try to insert valid number"<<endl;
      cin.clear();
      cin.ignore();
      goto d;}

      e:
    cout<<"enter the final exam(out of 50): ";
    cin>>final_exam;
     if(cin.fail() || test>15 || test<0){
      cout<<"your input is invalid please try to insert valid number"<<endl;
      cin.clear();
      cin.ignore();
      goto e;}
      
    total_mark=(test / 15)*15 +(quiz / 5)*5+(project / 20)*20+(assignment / 10)*10+(final_exam / 50)*50;
    cout<<"total_mark: "<<total_mark<<endl;

    if(total_mark >= 90){
          cout<<"A+";
    }else if(total_mark>=80){
      cout<<"A";
    }else if (total_mark>=75){
        cout<<"B+";
    }else if(total_mark>=60){
      cout<<"B";
    }
    else if (total_mark>=55){
       cout<<"C+";
    }else if (total_mark>=45){
      cout<<"C";
    }else if (total_mark>=30){
      cout<<"D";
    }else {
        cout<<"F";
    }
    
    return 0;}

