#include<iostream>
using namespace std;
int main()
{
    float x[3][2] = {{1.2,5.33},{10.22,-4.54},{53.1,-41.2}};
    float (*xPtr)[2] = x;
    
    cout << **xPtr << "\n";
    cout << *(*xPtr+1) << "\n";
    cout << **(xPtr+1) << "\n";
    cout << *(*(xPtr+1)+1) << "\n";
    cout << **(xPtr+2) << "\n";
    cout << *(*(xPtr+2)+1) << "\n";
    return 0;
}