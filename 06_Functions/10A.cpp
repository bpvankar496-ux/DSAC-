#include <iostream>
using namespace std;

int largest(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
        else if(b>=c){
            return b;
        }else{
            return c;
        }
    }
    
    int main(){
       cout <<largest(24,384,253);
        return 0;
    }

    //ANS:=
    //384