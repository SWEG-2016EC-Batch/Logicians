#include<iostream>
using namespace std;
int main(){
    int choice;
cout<<"  MENU   "<<endl;
cout<<"1.pattern for a number square"<<endl;
cout<<"2.pattern for a number right angle triangle"<<endl;
cout<<"3.pattern for a flipped number triangle"<<endl;
cout<<"4.pattern for a continuing alphabet square"<<endl;
cout<<"5.pattern for an alphabet triangle"<<endl;
cout<<"6.pattern for a repeating alphabet square"<<endl;
cout<<"7.pattern for a pyramid"<<endl;
cout<<"8.pattern for an inverted pyramid"<<endl;
cout<<"9.pattern for an inverted half pyramid"<<endl;
cout<<"10.pattern for a hollow square"<<endl;
cout<<"11.pattern of hollow inverted half pyramid"<<endl;
cout<<"12.pattern of hollow  pyramid"<<endl;
cout<<"13.to exit"<<endl;
cout<<"enter your choice"<<endl;
cin>>choice;
do{
switch(choice){
case 1:
    for (int i = 1; i <=5; i++)
    {
        for(int j=1 ; j<=5; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    break;
case 2:
       for (int i=1; i<=5; i++){
    
        for(int j=1; j<=i ;j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }
     break;
case 3:
    for (int i=1; i<=5; i++){
        for(int j=5; j>0 ;j--){
            if(j<=i){
                cout<<j<<" ";
            }
            else
            cout<<"  ";
        }
        cout<<endl;}
        break;
case 4:
     {char ch ='A';
        for (int i=1; i<=4; i++){
         for(int j=1; j<=6; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    } }
case 5:
   { char ch='A';
    for(int i=0; i<=4; i++){
        for(int j=0; j<=i ;j++){
            cout<<(char)(ch+j)<<" ";
            
        }
        cout<<endl;
    }}
    break;
case 6:
    { char ch='a';
     for(int i=0; i<=4; i++){
        for(int j=0; j<=4; j++){
            cout<< char(ch+j)<< " ";
            
        }
        cout<<endl;
       
     } } 
     break;
case 7:
      for (int i=1; i<=5; i++){
        for(int j=1; j<=5-i ; j++){ 
            cout<< " ";
        }
        for(int j=1; j<=i; j++){
                cout<<"* ";
            }
     cout<<endl;
    }
    break;
case 8:
    for (int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){ 
            cout<< " ";
        }
        for(int j=1; j<=5-i; j++){
                cout<<"* ";
            }
     cout<<endl;}
     break;
 case 9:
     for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    } 
     break;
case 10:
     
    for (int i = 1; i <=5; i++)
    {
        for(int j=1 ; j<=5; j++){
           if(i==1 || i==5 || j==1 || j==5){
            cout<<"*";
           }
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
     break;
case 11:
for (int i = 1; i <= 6; i++) {
                for (int k = 6 - i; k > 0; k--) {
                    cout << " ";
                }
                for (int j = 1; j <= i; j++) {
                    if (i == 1 || i == 6 || j == 1 || j == i) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }}
                break;
    case 12: for (int i = 6; i > 0; i--) {
                for (int j = i; j > 0; j--) {
                    if (i == 6 || i == 1 || j == i || j == 1) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

    default:
    cout<<"invalild choice"<<endl;
    break;}

    }while(choice != 13);
   
    return 0;

}
