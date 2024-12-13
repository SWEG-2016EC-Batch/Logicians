#include <iostream>
using namespace std;

int main()
{int row_dimension=6, column_dimension=6;
for(int i=1;i<= row_dimension;i++){
    
    for(int j=row_dimension;j>=i;j--){
     cout<<"* "; 
    }
    cout<<endl;
}
    
    return 0;
}
