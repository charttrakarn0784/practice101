#include<iostream>
using namespace std;
int main()
{
    char a,*b = &a;
    float c,*d = &c;
    double e,*f = &e;

    cout << sizeof(a) << "\n";
    cout << sizeof(b) << "\n";
    cout << sizeof(c) << "\n";
    cout << sizeof(d) << "\n";
    cout << sizeof(e) << "\n";
    cout << sizeof(f) << "\n";
}