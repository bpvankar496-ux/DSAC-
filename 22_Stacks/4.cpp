//3. Push at Bottom of Stack==>Recursion thi stack empty sudhi jaine niche value insert kariye.
#include <iostream>
#include <stack>
using namespace std;

void pushAtBottom(stack<int>& s, int val) {
    if (s.empty()) {
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();

    pushAtBottom(s, val);
    s.push(temp);
}