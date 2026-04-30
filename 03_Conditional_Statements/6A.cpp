#include <iostream>
using namespace std;
int main(){
    int year;

    cout<<"enter year= ";
    cin>>year;

    if(year%400==0){
        cout<<year<<"is a leap year.\n";
    }else if(year%100==0){
        cout<<year<<"is NOT a leapyear.\n";
    }else if(year%4==0){
        cout<<year<<"is a leapyear.\n";
    }else{cout<<year<<"is NOT a leapyear.\n";

    }return 0;
}
//400 n 100 etla mate km jo koi year 2000,3000 eva year mate baki badha 4 vade khbr pdi jay 


//ANS:=
// enter year= 2026
// 2026is NOT a leapyear.