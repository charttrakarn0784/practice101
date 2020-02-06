#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int x = 2*(rand()%12+1);
    for(int i = 0;i < 10;i++)
    {
        cout << x << "\n";
        x = 2*(rand()%12+1);
    }
    return 0;
}