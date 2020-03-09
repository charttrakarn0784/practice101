#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum=0,i=10;
    while(i <= 50)
    {
        sum += pow(i,2);
        i++;
    }
    cout << sum;
    return 0;
}