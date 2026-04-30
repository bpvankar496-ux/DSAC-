//cpy,cmp,cut in string
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    strcat(str1, str2);
    cout << "After strcat: " << str1 << endl;

    strcpy(str3, str1);
    cout << "After strcpy: " << str3 << endl;

    int res = strcmp(str1, str2);

    if(res == 0)
        cout << "Equal";
    else if(res < 0)
        cout << "str1 is smaller";
    else
        cout << "str1 is greater";

    return 0;
}