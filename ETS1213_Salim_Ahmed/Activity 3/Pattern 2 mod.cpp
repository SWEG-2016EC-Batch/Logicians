#include <iostream>
using namespace std;

int main()
{int row_dimension, column_dimension;
cout<<"Enter the row dimension\n";
cin>>row_dimension;
cout<<"Enter the column dimension\n";
cin>>column_dimension;
 char character='A';
for(int i=1;i<= row_dimension;i++){
   
    for(int j=1;j<=column_dimension;j++){
        cout<<character++<<" ";
        
    }
    cout<<endl;
}
    

    return 0;
}
