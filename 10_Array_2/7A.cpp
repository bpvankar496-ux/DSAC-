//array ni value 2 k tethi vadhu av to true baki false
#include <iostream>
#include <algorithm>//sort mate
using namespace std;

bool containsDuplicate(int nums[], int n) {
    sort(nums, nums + n);
    
    for(int i=1; i<n; i++) {
        if(nums[i-1] == nums[i]) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int nums[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(nums) / sizeof(int);
    
    // if(containsDuplicate(nums, n)) {
    //     cout << "true" << endl;
    // } else {
    //     cout << "false" << endl;
    // }
    cout<<containsDuplicate(nums,n)<<endl;
    
    return 0;
}

// ANS:=
// 1