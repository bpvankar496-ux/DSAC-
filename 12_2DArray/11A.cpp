//Problem: 1D array ને m×n 2D array માં convert કરો.

#include <iostream>
using namespace std;

int main() {
    int original[] = {1, 2, 3, 4};
    int m = 2, n = 2;
    int size = m * n;

    // Check valid size
    if(sizeof(original)/sizeof(int) != m * n) {
        cout << "Invalid" << endl;
        return 0;
    }

    int result[2][2];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            result[i][j] = original[i*n + j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//ANS:=
// 1 2
// 3 4