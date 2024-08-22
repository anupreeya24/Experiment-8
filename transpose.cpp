#include <iostream>
using namespace std;

int main() {
   int a[10][10], transpose[10][10], row, column, i, j;

   cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;

   cout << "\nEnter elements of matrix: " << endl;


   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }

   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << a[i][j];
        
      }
    cout<<endl;
   }

   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = a[i][j];
      }


   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i){
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         
      }
      cout<<endl;
   }

   return 0;
}

/*Enter rows and columns of matrix: 2
3

Enter elements of matrix: 
Enter element a11: 1
Enter element a12: 2
Enter element a13: 3
Enter element a21: 1
Enter element a22: 2
Enter element a23: 3

Entered Matrix: 
 1 2 3
 1 2 3

Transpose of Matrix: 
 1 1
 2 2
 3 3*/
