#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    switch(x)
    {
        case 7:
            x*=2;
            x++;
            break;
        case 3:
            x++;
        case 5:
            x%=3;
            x+=4;
            break;
        case 0:
        case 2:
            x/=2;
            x--;
            break;
        default:
            x++;
    }
    cout << "x = " << x;

    return 0;
}