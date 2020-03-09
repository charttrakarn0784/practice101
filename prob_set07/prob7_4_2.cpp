#include<iostream>
using namespace std;
int main()
{
    int num = 20;

    if(num >= 10)
    {
        cout << "A";
        cout << "B";
    }else if(num >= 5)
    {
        cout << "C";
    }else{
        cout << "D";
        cout << "E";
    }
    cout << "F";
    return 0;
}