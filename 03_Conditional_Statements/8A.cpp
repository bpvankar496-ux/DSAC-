#include <iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"enter a 3 digit number:";
    cin>>n;

    int num=n;
    int dig3=num%10;
           num/=10;
    int dig2=num%10;
            num/=10;
    int dig1=num;

    int cubeSum=dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;
    if(cubeSum==n){
        cout<<n<<"is an Armstrong Number\n";
    }else{cout<<n<<"is NOT an Armstrong Number\n";

    }return 0;
}

//koi pn didgit n 10 vade module leta e num no last didgit mde
//koi pn didgit n 10 vade divide karta eno last digit hati n num mde
//armstrong number e ke jena per no n cube no sarvado e sankhya jetlo j thy


//ANS:=
// enter a 3 digit number:121
// 121is NOT an Armstrong Number
 