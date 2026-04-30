//find subarr
#include <iostream>
using namespace std;

void printSubsets(string str, string subset) {
    // base case
    if(str.length() == 0) {
        cout << subset << endl;
        return;
    }

    char ch = str[0];

    // YES choice (include character)
    printSubsets(str.substr(1), subset + ch);

    // NO choice (exclude character)
    printSubsets(str.substr(1), subset);
}

int main() {
    string str = "abcd";
    string subset = "";

    printSubsets(str, subset);

    return 0;
}