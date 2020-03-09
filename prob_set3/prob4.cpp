#include<iostream>
using namespace std;

void func1()
{
    cout << "A\n";
}
int func2(int x)
{
    int y = x*x;
    return y;
}
int main()
{
    func1();
    cout << func2(2) << "\n";
    cout << func2(4) << "\n";
    func1();
    return 0;
}