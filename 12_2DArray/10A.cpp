// Question 3:
// Write a program to Find Transpose of a Matrix.
// Transpose of a matrix is the process of swapping the rows to columns.

#include <iostream>
using namespace std;

int main() {
    int mat[2][3] = {{1, 2, 3},
                     {4, 5, 6}};

    int transpose[3][2];

    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    cout << "Transposed Matrix:" << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// ANS:=
// Transposed Matrix:
// 1 4 
// 2 5 
// 3 6 