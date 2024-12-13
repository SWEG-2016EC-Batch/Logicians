                                       // Pattern 4a1
#include <iostream>
using namespace std;

int main()
{
   for(int i=1; i<=5;i++){
       for(int j=1;j<=5;j++){
           cout<<j <<" ";
           
       }cout<<endl;
   }
   
    return 0;
}

                                   // Pattern 4a2

#include <iostream>
using namespace std;

int main()
{ char alpha='A';
   for(int i=1; i<=4;i++){
       for(int j=1;j<=6;j++){
           cout<<alpha<<" ";
           alpha++;
           if(alpha > 'X')break;
           
       }cout<<endl;
   }
   
    return 0;
}

                                 // Pattern 4a3

#include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=5;i++){
       for(int j=1;j<=i;j++){
          cout<<j<<" ";
       }cout<<endl;
   }
   
    return 0;
}

                                //Pattern 4b1

#include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=5;i++){
       for(int j=i;j<5;j++){
          cout<<"  ";}
           for(int j=i;j>=1;j--){
          cout<<" "<<j;
       }cout<<endl;
   }
   
    return 0;
}

                                 //Pattern 4b2

#include <iostream>
using namespace std;

int main()
{ 
   for(char i='A'; i<='E';i++){
       for(char j='A';j<=i;j++){
           
          cout<<j<<" ";
           
       }cout<<endl;
           
       }
   
   
    return 0;
}

                                   //Pattern 4b3

#include <iostream>
using namespace std;

int main()
{ 
   for(char i='a'; i<='e';i++){
       for(char j='a';j<='e';j++){
           
          cout<<j<<" ";
           
       }cout<<endl;
           
       }
   
   
    return 0;
}
