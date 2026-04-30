//Problem: n×n matrix ને 90 degree clockwise rotate કરો. In-place કરવાનું છે.

#include <iostream>
using namespace std;

void rotate(int matrix[][3], int n) {
    // Step 1: Transpose
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i=0; i<n; i++) {
        int s = 0, e = n-1;
        while(s < e) {
            swap(matrix[i][s], matrix[i][e]);
            s++;
            e--;
        }
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    rotate(matrix, 3);

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

//ANS:=
// 7 4 1 
// 8 5 2 
// 9 6 3 