#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    cout<<"Enter Matrix 2 x 3";
    for(int i=0;i<2;i++){
         for(int j=0;j<3;j++){
             cin>>arr[i][j];
         }
        
    }
    cout<<"Matrix 2x3\n";
    for(int i=0;i<2;i++){
         for(int j=0;j<3;j++){
             cout<<arr[i][j]<<" ";
         }
        cout<<endl;
    }
    
    return 0;

}

/*output*/

//Enter Matrix 2 x 312

//32
//3
//4
//5
//6
//Matrix 2x3
//1 32 3 
//4 5 6 
