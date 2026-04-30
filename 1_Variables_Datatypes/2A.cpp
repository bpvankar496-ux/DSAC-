#include <iostream>
using namespace std;
int main(){
float pencost ,pencilcost ,erasercost ;

cout<<"ENTER YOUR pencost=";
cin>> pencost;
cout<<"ENTER YOUR pencilcost=";
cin>>pencilcost;
cout<<"ENTER YOUR erasercost=";
cin>>erasercost;

float totalcost=pencost+pencilcost+erasercost;

cout<<"your total bill= "<<totalcost<<endl;
cout<<"your total bill with GST= "<<totalcost+(0.18*totalcost)<<endl;

    return 0;
}


//ANS:=
// ENTER YOUR pencilcost=5
// ENTER YOUR erasercost=8
// your total bill= 17
// your total bill with GST= 20.06