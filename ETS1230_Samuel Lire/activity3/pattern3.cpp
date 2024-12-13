#include <iostream>
using namespace std;

int main()
{int row_dimension=5, column_dimension=5;
for(int i=1;i<= row_dimension;i++){
   int number=1;
    for(int j=1;j<=i;j++){
        cout<<number++<<" ";
    }
    cout<<endl;
}
    
    return 0;
}
