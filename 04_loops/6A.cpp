//Qs:Factorial of anumber n
#include<iostream>
using namespace std;
int main(){
int n;
int fact=1;

cout<<"enter num= ";
cin>>n;
for(int i=1;i<=n;i++){
    fact*=i;
}
cout<<"factorial of "<<n<<"="<<fact<<"\n";
return 0;
}


//ANS:=
// enter num= 5
// factorial of 5=120