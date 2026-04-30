
//Qs:Check for Armstrong Number 
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter num = ";
    cin >> n;

    int num= n;   
    int cubeSum = 0;

    while(num > 0) {
        int lastDig = num% 10;
        cubeSum += lastDig * lastDig * lastDig;
        num /= 10;
    }

    if(n == cubeSum) {
        cout << "It is Armstrong number";
    } else {
        cout << "It is not Armstrong number";
    }

    return 0;
}


//ANS:=
// Enter num = 153
// It is Armstrong number