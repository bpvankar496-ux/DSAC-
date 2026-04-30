//Qs:Print Primes from 2toN
//METHOD 1
#include<iostream>
using namespace std;
int main(){
 int N;
 cout<<"enter a num=";
 cin>>N;
 
 for(int i=2;i<=N;i++)
 {int curr=i;
    bool isPrime=true;
    for(int j=2;j*j<=i;j++){
        if(curr%j==0){isPrime=false;
        }
    }
    if(isPrime){
            cout<<curr<<" ";
        }
 }
 cout<<endl;
    return 0;
}

//METHOD 2
#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a num = ";
    cin >> N;

    for(int i = 2; i <= N; i++) {

        bool isPrime = true;

        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;   // divisor mali gaya pachi loop stop
            }
        }

        if(isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}


//ANS:=
//enter a num=8
//2 3 5 7 