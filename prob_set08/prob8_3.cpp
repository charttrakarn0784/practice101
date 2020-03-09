#include<iostream>
using namespace std;
int main()
{
    int x,Min; 
    cout << "Input number: ";
    cin >> x;
    Min = x;
    if(x<=0)
    {
        cout << "Minimum = N/A";
    }else
    {
        while(x>0)
        {
            if(x<Min) Min = x;
            cout << "Input number: ";
            cin >> x;
        }
        cout << "Minimum = " << Min;
    }
    
    return 0;
}