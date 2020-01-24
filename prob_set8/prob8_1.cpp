#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x,sum=0;
    for(int i = 2;i <= 222;i+=2)
    {
        sum += (1.0/i);
    }
    cout << fixed << setprecision(10);
    cout << "And the answer is ===> " << sum;

    return 0;
}
