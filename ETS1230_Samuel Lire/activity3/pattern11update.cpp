#include <iostream>
using namespace std;

int main()
{int row_dimension, column_dimension;
cout<<"enter the row dimension\n";
cin>>row_dimension;
cout<<"enter the column dimension\n";
cin>>column_dimension;
for(int i= row_dimension;i>0;i--){
    
   for(int k=(row_dimension-i)+1;k>=1;k--)
        {cout<<" ";}
    for(int j=1;j<=i;j++){
     cout<<"* "; 
    }
    cout<<endl;
}
    
    return 0;
}
