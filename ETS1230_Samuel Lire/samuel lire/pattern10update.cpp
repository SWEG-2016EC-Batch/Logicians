#include <iostream>
using namespace std;

int main()
{int row_dimension, column_dimension;
cout<<"enter the row dimension\n";
cin>>row_dimension;
cout<<"enter the column dimension\n";
cin>>column_dimension;
for(int i=1;i<= row_dimension;i++){
    
   for(int k=row_dimension;k>i;k--)
        {cout<<" ";}
    for(int j=1;j<=i;j++){
     cout<<"* "; 
    }
    cout<<endl;
}
    
    return 0;
}
