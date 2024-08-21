#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    int arr1[2][3];
    int answer[2][3];
    
  
    cout << "Enter Matrix 2x3:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    
    
    cout << "Matrix 2x3:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
    cout << "Enter Matrix 2x3:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr1[i][j];
        }
    }
    

    cout << "Matrix 2x3:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    
    
    cout << "Sum of Matrices:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            answer[i][j] = arr[i][j] + arr1[i][j];
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}


/*Enter Matrix 2x3:
1
2
3
4
5
6
Matrix 2x3:
1 2 3 
4 5 6 
Enter Matrix 2x3:
1

2
3
4
5
6
5
Matrix 2x3:
2 3 4 
5 6 5 
Sum of Matrices:
3 5 7 
9 11 11 */
