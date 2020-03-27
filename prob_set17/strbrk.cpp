#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char x[] = "May the force be with you";
    char y[strlen(x)+1];
    strcpy(y,x);
    char *start = y;
    char *end = strpbrk(y," ");
    while(end){
        *end = '\0';
        cout << start << "\n";
        start = end+1;
        end = strpbrk(start," ");
    }
    cout << start << "\n";
    cout << x << "\n";

    return 0;
}
