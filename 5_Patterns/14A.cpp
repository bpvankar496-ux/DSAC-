//method 1
#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i < n; i++){
        int val = (i % 2 == 0) ? 1 : 0;   // even row -> 1, odd row -> 0
        
        for(int j = 0; j <= i; j++){
            cout << val;
            val = !val;   // toggle
        }
        cout << endl;
    }
    return 0;
}

//method 2

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++)  {
            cout << (i+j)%2;
        }
        cout << endl;
    }
    return 0;
}


//ANS:=
//1
//01
//101
//0101
//10101