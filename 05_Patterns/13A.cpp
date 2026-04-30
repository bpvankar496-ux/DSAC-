#include<iostream>
using namespace std;
int main(){
bool val=true;
int n=7;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++) {
        cout<<val<<"";
        val=!val;
    }
    cout<<"\n";
}
return 0;
}


//ANS:=
//1
//01
//010
//1010
//10101
//010101
//0101010
