#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int X,Y;
    double Z;
    cout << "Enter X: ";
    cin >> X;
    cout << "Enter Y: ";
    cin >> Y;
    if(X >= 20 && Y>=20 && X+Y >= 50)
    {
        if(Y > X)
        {
            Y = 2*Y;
        }
        Z = (X+Y)/2.0;
    }else
    {
        Z = sqrt(X^2+Y^2);
        if(Z > 50)
        {
            Z = 50;
        }
    }
    cout << "And the answer is --> " << Z ;
    
    return 0;
}