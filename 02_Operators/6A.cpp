#include <iostream>
using namespace std;
int main(){
    int x=200,y=50,z=100;
    if(x>y&&y>z){
        cout<<"Hello\n";
    }if(z>y&&z<x){
        cout<<"C++\n";
    }if((y+200)<x&&(y+150)<z){
        cout<<"HelloC++\n";
    }if(x>y||y>z){
        cout<<"hii\n";
    }if(x<y||y>z){
        cout<<"hello\n";
    }if(!(x>y)){
        cout<<"byy\n";
    }if(!(x<y)){
        cout<<"no\n";
    }
        return 0;
    }
//&& banne true hoi to true baki badha ma false
//|| banne false hoi to false baki badhama true
//! true hoi to false n false hoi to true
//true hoi to cout exicute thy


//ANS:=
// C++
// hii
// no