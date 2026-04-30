#include<iostream>
using namespace std;

void multipleBy2(int *a, int *b, int *c){
    *a = *a * 2;//you write as *a *= 2
    *b = *b * 2;
    *c = *c * 2;
}

int main(){
   int a=1, b=2, c=3;
    multipleBy2(&a ,&b ,&c);
    cout<<a<<" "<<b<<" "<<c;
    return 0;

}

//ANS:=
//2 4 6