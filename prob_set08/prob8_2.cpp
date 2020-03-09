#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,sum=0;
    for(int i=3;i<=333;i+=3)
    {
        if(i%2==0) sum += pow(i,2);
        else sum += pow(i,3); 
    }
    cout << "and the answerr is!!! --> " << sum;

    return 0;
}
