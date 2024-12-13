#include <iostream>
using namespace std;

int main()
{int row_dimension=6, column_dimension=6;
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
