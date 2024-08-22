#include <iostream>
using namespace std;

int main() {
   
    int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int b[3][2] = { {1, 2}, {3, 4}, {5, 6} };
    int result[2][2] = {0};  
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Product of the two matrices is:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*Product of the two matrices is:
22 28 
49 64 */
