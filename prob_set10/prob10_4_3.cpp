#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int x = rand()%11-5;
    for(int i = 0;i < 10;i++)
    {
        cout << x << "\n";
        x = rand()%10-5;
    }
    return 0;
}