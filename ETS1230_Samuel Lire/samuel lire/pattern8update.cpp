#include <iostream>
using namespace std;

int main()
{int row_dimension;
cout<<"Enter the row dimension\n";
cin>>row_dimension;
for(int i=1;i<= row_dimension;i++){
    
    for(int j=row_dimension;j>=i;j--){
     cout<<"* "; 
    }
    cout<<endl;
}
    
    return 0;
}
