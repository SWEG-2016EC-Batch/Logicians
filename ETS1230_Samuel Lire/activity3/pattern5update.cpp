#include <iostream>
using namespace std;

int main()
{int row_dimension, column_dimension;
cout<<"enter the row dimesion\n";
cin>>row_dimension;
cout<<"enter the column dimesion\n";
cin>>column_dimension;
for(int i=1;i<= row_dimension;i++){
   char character='A';
    for(int j=1;j<=i;j++){
        cout<<character++<<" ";
    }
    cout<<endl;
}
    
    return 0;
}
