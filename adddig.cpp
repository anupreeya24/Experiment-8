// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int arr[3][3];
    int add = 0;

    cout << "Enter the elements of the  matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout<< arr[i][j]<<" ";
        
        }
        cout<<endl;
    }
    cout<<"Additon of diagonal"<<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i==j){
                add+=arr[i][j];
        
            cout<<"Matrix is symmetrical"<<endl;
                 
                
            }
        }
    }
    cout<<add<<endl;
    
    return 0;
}

/*Enter the elements of the  matrix:
1
2
3
4
5
6
7
8
9
1 2 3 
4 5 6 
7 8 9 
Additon of diagonal
Matrix is symmetrical
Matrix is symmetrical
Matrix is symmetrical
15*/
