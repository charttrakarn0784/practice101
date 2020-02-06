#include<iostream>
using namespace std;

int WTF(int a, int &b,int &c)
{
    a *= b;
    if(c > 5) b += a;
    else b -= a;
    return a+b+c;
}

int main()
{
    int x = 4,y = 5,z = 6;
    cout << "return value = " << WTF(x,y,z) << "\n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "z = " << z << "\n";
    return 0;
}