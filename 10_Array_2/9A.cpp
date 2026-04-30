//find subarray for max product *

#include <iostream>
#include <climits>
using namespace std;

int maxProduct(int arr[], int n) {
    int maxProd = INT_MIN;

    for(int i = 0; i < n; i++) {
        int currProd = 1;
        for(int j = i; j < n; j++) {
           currProd *= arr[j]; 
          cout << currProd << ", ";
            if(currProd > maxProd) {
                maxProd = currProd;
            }
        }
        cout << endl;
    }

    cout << "Max Product = " << maxProd << endl;
    return maxProd;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = 4;

    maxProduct(arr, n);

    return 0;
}

//ANS:=
// 2, 6, -12, -48, 
// 3, -6, -24, 
// -2, -8, 
// 4, 
// Max Product = 6