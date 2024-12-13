                                    
                                            //Hallow Square Pattern

#include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=7;i++){
       for(int j=1;j<=8;j++){
           
           if(i==1 || i==7 || j==1 || j==8)cout<<"* ";
           
           else cout<<"  ";
           
       }cout<<endl;
   }
   
    return 0;
}  
                                       // Inverted Half Pyramid Pattern

         #include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=6;i++){
       for(int j=i;j<=6;j++){
           
           cout<<"*";
           
         
       }cout<<endl;
   }
   
    return 0;
}

                                    // Hallow Inverted Pyramid Pattern

#include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=6;i++){
       for(int j=i;j<=6;j++){
           
           if(i==1||i==j  ||  j==1 || j==6)
           
           cout<<"*";
           
           else cout<<" ";
           
         
       }cout<<endl;
   }
   
    return 0;
}
                               //Fully Pyramid Pattern

#include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=6;i++){
        for(int j=i;j<=6;j++){
           
         cout<<" ";}
       for(int j=1;j<=i;j++){
           
         cout<<"* ";
           
         
       }cout<<endl;
   }
   
    return 0;
}

                         //Inverted Fully Pyramid Pattern

#include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=6;i++){
        for(int j=1;j<=i;j++){
           
         cout<<" ";}
       for(int j=i;j<=6;j++){
           
         cout<<"* ";
           
         
       }cout<<endl;
   }
   
    return 0;
}

                          //Hallow Inverted Fully Pyramid Pattern

#include <iostream>
using namespace std;

int main()
{ 
   for(int i=1; i<=6;i++){
       
       for(int j=i;j<=6;j++){
           
         cout<<" ";}
       
       for(int j=1;j<=i;j++){
           
           if(i==1|| i==6 || j==1||j==i){
                 cout<<"* ";}
         
           else cout<<"  ";
         
       }cout<<endl;
   }
   
    return 0;
}
