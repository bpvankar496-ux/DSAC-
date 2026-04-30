#include <iostream>
using namespace std;

int digSum(int n) {
    int res = 0;

    while(n > 0) {
        res += n % 10;   // last digit add kare
        n = n / 10;      // last digit remove kare
    }

    return res;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << digSum(num);

    return 0;
}

//ANS:=
//Enter a number: 451
//Sum of digits = 10