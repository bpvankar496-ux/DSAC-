#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello World";

    // 1. length()
    cout << str.length();       // Output: 11

    // 2. at(idx)
    cout << str.at(0);          // Output: H
    cout << str.at(6);          // Output: W

    // 3. substr(startIdx, size)
    cout << str.substr(6, 5);   // Output: World
    cout << str.substr(0, 5);   // Output: Hello

    // 4. find(word)
    cout << str.find("World");  // Output: 6
    cout << str.find("Hello");  // Output: 0 jo e word hoi j nai to random value avse pn jo value print karavo to answe -1 ave

    return 0;
}