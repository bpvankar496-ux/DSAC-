//pointer arithmatic-4
#include <iostream>
using namespace std;

int main() {
int arr[9]={1,2,3,4,5,6,7,8,9};
int *ptr1=arr;
int *ptr2=ptr1+3;

cout<<ptr2<<endl;
 cout<<ptr1<<endl;

 cout<<*ptr2<<endl;
 cout<<*ptr1<<endl;

cout<<(ptr2>ptr1)<<endl;
cout<<(ptr2<ptr1)<<endl;
cout<<(ptr2==arr)<<endl;

cout<<(*ptr2>*ptr1)<<endl;
cout<<(*ptr2<*ptr1)<<endl;
cout<<(*ptr2==*arr)<<endl;


    return 0;

}
//-,<,> badham ptr n *ptr sarkhu j aa oprator sathe use thy to pn jo single hoi to bnne diff ch

// ANS:=
// 0x61fec4
// 0x61feb8
// 4
// 1
// 1
// 0
// 0
// 1
// 0
// 0