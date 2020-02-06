#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int x = rand()%100+1;
    for(int i = 0;i < 10;i++)
    {
        cout << x << "\n";
        x = rand()%100+1;
    }
    return 0;
}