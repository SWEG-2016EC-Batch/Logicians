#include <iostream>
using namespace std;

int main()
{int row_dimension=4, column_dimension=6;
 char character='A';
for(int i=1;i<= row_dimension;i++){
   
    for(int j=1;j<=column_dimension;j++){
        cout<<character++<<" ";
        
    }
    cout<<endl;
}
    

    return 0;
}
