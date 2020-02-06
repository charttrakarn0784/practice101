#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    srand(time(0));
    int x = pow(10,rand()%4);
    for(int i = 0;i < 10;i++)
    {
        cout << x << "\n";
        x = pow(10,rand()%4);
    }
    return 0;
}