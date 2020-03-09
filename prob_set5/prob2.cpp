#include<iostream>
using namespace std;

int main()
{
    int A[6] = {9,-7,3,4,-2,4}, i = 0;
    while(i < 6)
    {
        if(A[i] > 0)
        {
            cout << A[i] << "\n";
        }
        i++;
    }
    return 0;
}