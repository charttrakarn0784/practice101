#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum=0,i=3;
    while(i <= 300)
    {
        sum += pow(i,2);
        i += 3;
    }
    cout << sum;
    return 0;
}