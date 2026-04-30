// Question 2:
// Print out the sum of the numbers in the second row of the "nums" array.
// Input: int nums[][] = { {1,4,9}, {11,4,3}, {2,2,3} };
// Output: 18

#include <iostream>
using namespace std;

int main() {
    int nums[3][3] = {{1, 4, 9},
                      {11, 4, 3},
                      {2, 2, 3}};
    int sum = 0;

    // second row = index 1
    for(int j=0; j<3; j++) {
        sum += nums[1][j];
    }

    cout << "Output: " << sum << endl;
    return 0;
}

//ANS:=
//Output: 18