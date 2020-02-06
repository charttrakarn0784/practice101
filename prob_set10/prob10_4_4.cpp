#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main()
{
    srand(time(0));
    int x = pow(2,rand()%10+1);
    for(int i = 0;i < 10;i++)
    {
        cout << x << "\n";
        x = pow(2,rand()%10+1);
    }
    return 0;
}