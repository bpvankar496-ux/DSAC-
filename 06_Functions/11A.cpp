#include <iostream>
using namespace std;

char getNextChar(char ch){
    if(ch=='z'){
        return'a';
    }else{return ch+1;
    }
}

int main(){
    cout<<getNextChar('r');
    return 0;
}

//ANS:=
//s