#include <iostream>
using namespace std;

int main() {
int arr[9]={1,2,3,4,5,6,7,8,9};
int *ptr1=arr;
int *ptr2=ptr1+3;

cout<<ptr2<<endl;
cout<<ptr1<<endl;

cout<<ptr2-ptr1<<endl;
cout<<*ptr2-*ptr1<<endl;

    return 0;

}
//ptr 1,2 e bdhu ekhlu hoi to addrs ape pn e badbaki ma ave to value j .. ptr 1 and *ptr 1 same in substrc ma value j gnay  baki individul ma ptr address and *ptr value store kre

//ANS:=
// 0x61fec4
// 0x61feb8
// 3
// 3