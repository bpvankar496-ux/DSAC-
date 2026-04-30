//pointer arithmatic-3
#include <iostream>
using namespace std;

int main() {
int a=5;
int *ptr1=&a;
int *ptr2=ptr1+3;

cout<<ptr2<<endl;
cout<<ptr1<<endl;

cout<<ptr2-ptr1<<endl;//Pointer difference elements ma ape che, bytes ma nai.8-5=3

    return 0;

}

// ANS:=
// 0x61ff10
// 0x61ff04
// 3



// # Pointer Arithmetic Logic
// ## Pointer Subtraction Valid
// ptr2 - ptr1
// Aa be pointers vachche ketla elements nu distance che e batave che.
// Example:
// ptr1 = 100
// ptr2 = 112
// `int` = 4 bytes
// 112 - 100 = 12 bytes
// 12 / 4 = 3
// Output:
// 3

// # Pointer Addition Invalid
// ptr1 + ptr2
// Example:
// ptr1 = 100
// ptr2 = 200
// Addition:
// 100 + 200 = 300
// Aa 300 kai valid address che ke nai e compiler ne khabar nathi.
// Etle pointer addition allowed nathi.
// # Valid Operations

// | Operation    | Valid |
// | ------------ | ----- |
// | ptr + number | YES   |
// | ptr - number | YES   |
// | ptr2 - ptr1  | YES   |
// | ptr1 + ptr2  | NO    |

// # Why ptr + number Valid?
// ptr + 1
// Compiler ne type ni khabar hoy che.
// Example:
// int *ptr
// 1 int = 4 bytes
// Etle:
// ptr + 1 = next 4 bytes address
// # Final Logic
// Pointer subtraction = distance between pointers
// Pointer addition = no logical meaning
