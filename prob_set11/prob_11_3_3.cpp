#include<iostream>
#include<cmath>
using namespace std;
double findX(int n)
{
    if(n == 0) return 1;
    if(n == 1) return 2;
    return 1+(n/findX(n-1));
}
int main()
{
    cout << findX(0) << "\n";
    cout << findX(1) << "\n";
    cout << findX(2) << "\n";
    cout << findX(3) << "\n";
    cout << findX(4) << "\n";
    return 0;
}
