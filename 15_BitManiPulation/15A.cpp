// Question: Array ની XOR Beauty શોધો - જ્યાં બધા possible triplets (i,j,k) માટે (nums[i] | nums[j]) & nums[k] નું XOR return કરવાનું છે. 
// Logic: બધું simplify થઈને ફક્ત (OR of all) & (XOR of all) બને છે
 #include <iostream>
#include <vector>
using namespace std;

int xorBeauty(vector<int>& nums) {
    int a = 0, b = 0;

    for(int i=0; i<nums.size(); i++) {
        a = a | nums[i];
        b = b ^ nums[i];
    }

    return ( a & b );
}

int main() {
    vector<int> nums = {1, 4};
    cout << xorBeauty(nums) << endl;
    return 0;
}