#include<iostream>
using namespace std;
void myfunc(int *,int *);
int main()
{
    int a = 10,b = 8;
    myfunc(&a,&b);
    cout << a << " " << b;

    return 0;
}
void myfunc(int *x,int *y)
{ 
    int temp = *x;
    *x += *y/2; //10+4 = 14
    *y += temp/2; //8+5 = 13
}
