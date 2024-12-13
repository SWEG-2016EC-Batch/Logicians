#include <iostream>
using namespace std;

int main()
{int dimension;
cout<<"enter the dimension\n";
cin>>dimension;
for(int i=1;i<=dimension;i++){
    char character='a';
    for(int j=1;j<=dimension;j++){
        cout<<character++<<" ";
        
    }
    cout<<endl;
}
    

    return 0;
}
