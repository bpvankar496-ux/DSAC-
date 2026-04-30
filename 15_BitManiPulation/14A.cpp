//Question: Array માં બધા numbers બે વખત આવે છે, ફક્ત એક number એક જ વખત આવે છે - એ શોધો. 
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int answer = 0;

    for(int i=0; i<nums.size(); i++) {
        answer ^= nums[i];
    }

    return answer;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNumber(nums) << endl;
    return 0;
}