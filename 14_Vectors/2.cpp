//Dynamic Memory Allocation=>program chalta time memory levu (new thi)
#include <iostream>
using namespace std;

int main(){
    int *p = new int;  // memory allocate
    *p = 10;

    cout<<*p<<endl;

    delete p;  // memory free
    return 0;
}