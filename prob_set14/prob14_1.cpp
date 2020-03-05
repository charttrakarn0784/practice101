#include<iostream>
using namespace std;
int main()
{
    int a = 69;
    int *b = &a;
    int **c = &b;
    cout << &a << "\n";
    // cout << *a << "\n";
    cout << b << "\n";
    cout << &b << "\n";
    cout << &c << "\n";
    cout << *c << "\n";
    cout << **c << "\n";
    cout << c << "\n";
}