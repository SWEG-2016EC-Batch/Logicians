#include <iostream>
using namespace std;

int main()
{int row_dimension=5, column_dimension=5;
for(int i=1;i<= row_dimension;i++){
   char character='A';
    for(int j=1;j<=i;j++){
        cout<<character++<<" ";
    }
    cout<<endl;
}
    
    return 0;
}
