#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    while(count%6!=1 || count<10)
    {
        cout << "x" << count;
        if(count%5 == 2)
        {
            cout << "\n";
        }
        count++;
    }
    return 0;
}