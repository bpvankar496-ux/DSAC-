//pointer arithmetic-2
#include <iostream>
using namespace std;

int main() {
int a=5;
int *ptr=&a;

cout<<*ptr<<endl;
cout<<ptr<<endl;
ptr=ptr+3;
cout<<ptr<<endl;
ptr=ptr-3;
cout<<ptr<<endl;

    return 0;

}
//ptr+3 no mtlb 3 tymes byte mtlb int hoi to 3*4 12 step skip kare ch hoi to 3 step
//terminal ma 8,9 pachi a to f pachi 0 to 4 ave total 12 em last digit mte
//matln  09 pachi a to f ave pachi 10 avse pachi 10 to 19 pachi a to f n pachi 20......

// ANS:=
// 5
// 0x61ff08
// 0x61ff14
// 0x61ff08