#include<iostream>
using namespace std;
void printPattern2(int N);
int main()
{
    printPattern2(3);
    printPattern2(4);
    printPattern2(5);
    printPattern2(0);
    printPattern2(-1);
    
    return 0;
}
void printPattern2(int N)
{
    if(N>0)
    {
        for(int i=1;i<=N;i++) //* บรรทัด
        {
            for(int j=1;j<=N;j++) //? ใส้ใน
            {
                if(j <= i) cout << "O";
                else cout << "x";
            }
            cout << "\n";
        }
        cout << "\n";
    }else
    {
        cout << "Invalid input\n\n";
    }
}