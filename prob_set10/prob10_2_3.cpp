#include<iostream>
using namespace std;

int myFunction(int a,int &b)
{   
    b *= 2;
    a++;
    if(a > b) return 2*a;
    else return a+b;
}

int main()
{
    int x[3] = {1,2,3};
    cout << x[1] << " " << x[2] << "\n";
    cout << myFunction(x[1],x[2]) << "\n";
    cout << x[1] << " " << x[2] << "\n";
    return 0;
}