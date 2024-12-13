#include <iostream>
using namespace std;

int main()
{int row_dimension, column_dimension;
cout<<"enter the row dimession\n";
cin>>row_dimension;
cout<<"enter the column dimession\n";
cin>>column_dimension;
for(int i=1;i<= row_dimension;i++){
   int number=1;
    for(int j=1;j<=column_dimension;j++){
        cout<<number++<<" ";
    }
    cout<<endl;
}
    
    return 0;
}
