#include <iostream>
using namespace std;

int main(){
int a = 32;//a=32
int *ptr = &a;//a no add

char ch = 'A'; //ch=A=65
char &cho = ch;//cho=ch=A=65

cho += a;//cho=ch =>cho=cho+a=> cho=65+32=>97 cho=97 cho=ch=97
*ptr += ch;//*ptr=a=32=> *ptr=ptr+ch *ptr=32+97 =>129 *ptr=a ni value so at the end  a=129

cout << a << ", " << ch << endl; //ch ni value 97 ch ascii value  prmane 97=a thy ch mate a print thyo
return 0;

}
//ptr ,&a badha address ape *ptr e jeni ch  actual value 

//ANS:=
//129, a
