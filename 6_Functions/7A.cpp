//palindrome etle agdthi n pachdthi sarkho j lkhy 121,232
#include <iostream>
using namespace std;

int reverse(int n) {
    int res = 0;

    while(n > 0) {
        int lastDig = n % 10;   // chello digit malse
        res = res * 10 + lastDig; // reverse ma add kariye
        n = n / 10;   // last digit remove kariye agdna 2 akda vadhe je agdnu loop chlve
    }

    return res;
}

bool isPalindrome(int n) {
     return n ==reverse(n);
}

 int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << "Palindrome number";
    } else {
        cout << "Not a palindrome number";
    }

    return 0;
}

//ANS:=
//Enter a number: 121
//Palindrome number