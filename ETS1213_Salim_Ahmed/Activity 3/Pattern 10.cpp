#include <iostream>
using namespace std;

int main()
{int row_dimension=6, column_dimension=6;
for(int i=1;i<= row_dimension;i++){
    
   for(int k=6;k>i;k--)
        {cout<<" ";}
    for(int j=1;j<=i;j++){
     cout<<"* "; 
    }
    cout<<endl;
}
    
    return 0;
}
