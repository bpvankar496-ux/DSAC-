//Qs:Print  N Fibonacci Numbers
//fibonacci nu  etle k 0 1 1 2 3 5 8 13 ... Pehla be numbers fix hoy:0 ane 1 Baki badha numbers:third = first + second

#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a num= ";
cin>>n;
int first=0,sec=1;
cout<<first<<" "<<sec<<" ";

for(int i=2;i<n;i++){
    int third=first+sec;
    cout<<third<<" ";
    first=sec;
    sec=third;
}
    cout<<endl;
    return 0;

}


//ANS:=
// enter a num= 7
// 0 1 1 2 3 5 8 