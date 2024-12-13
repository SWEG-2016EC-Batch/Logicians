#include <iostream>
typedef float d;
using namespace std;

int main()
{
   float test_score,quise_score,project_score;
  float assignment_score,final_exam_score,total_mark;
  int number_subject,number_student;
  cout <<"Enter number of student "<<endl;
  cin>>number_student;
   for(int j=1;j<=number_student;j++){
  cout <<"Enter number of subject "<<endl;
  cin>>number_subject;
  for(int i=1;i<=number_subject;i++){
         start: 
   cout <<"Enter your test score out of 15"<<endl;
   cin>>test_score;
   if(cin.fail()||test_score>15||test_score<0){
       cout<<"your input is invalid please try to insert valid input"<<endl;
       cin.clear(); 
    cin.ignore(); 
    goto start;
   }
    a:
   cout <<"Enter your quise score out of 5"<<endl;
   cin>>quise_score;
    if(cin.fail()||quise_score>5||quise_score<0){
       cout<<"your input is invalid please try to insert valid input"<<endl;
       cin.clear(); 
    cin.ignore(); 
    goto a;
   }
   b:
   cout <<"Enter your project score out of 20"<<endl;
   cin>>project_score;
   if(cin.fail()||project_score>20||project_score<0){
       cout<<"your input is invalid please try to insert valid input"<<endl;
       cin.clear(); 
    cin.ignore(); 
    goto b;
   }
   c:
   cout <<"Enter your assignment score out of 10"<<endl;
   cin>>assignment_score;
    if(cin.fail()||assignment_score>10||assignment_score<0){
       cout<<"your input is invalid please try to insert valid input"<<endl;
       cin.clear(); 
    cin.ignore(); 
    goto c;
   }
    d:
   cout <<"Enter your inal exam score out of 50"<<endl;
   cin>>final_exam_score;
   if(cin.fail()||final_exam_score>50||final_exam_score<0){
       cout<<"your input is invalid please try to insert valid input"<<endl;
       cin.clear(); 
    cin.ignore(); 
    goto d;
   }
 
   else{
   total_mark=test_score+quise_score+project_score+assignment_score+final_exam_score;
   if(total_mark>=90){
       cout <<"Your Grade is : A+"<<endl;
   }
   
   else if(total_mark>=80){
       cout <<"Your Grade is : A"<<endl;
   }
   
   else if(total_mark>=75){
       cout <<"Your Grade is : B+"<<endl;
   }
   
   else if(total_mark>=60){
       cout <<"Your Grade is : B"<<endl;
   }
   
   else if(total_mark>=55){
       cout <<"Your Grade is : C+"<<endl;
   }
   
   
else if(total_mark>=45){
       cout <<"Your Grade is : C"<<endl;
   }
      
else if(total_mark>=30){
       cout <<"Your Grade is : D"<<endl;
   }
   
   else {
       cout <<"Your Grade is : F"<<endl;
   }}}}
   
   
    return 0;
} 
