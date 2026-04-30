//5. Reverse a Stack==> Recursion + pushAtBottom use kari pura stack reverse kariye.
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

void reverseStack(stack<int>& s) {
    if (s.empty()) return;

    int temp = s.top();
    s.pop();

    reverseStack(s);
    pushAtBottom(s, temp);
}