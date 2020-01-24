#include<iostream>
using namespace std;
void printPattern1(int N,int M);
int main()
{
    printPattern1(2,2);
    printPattern1(3,5);
    printPattern1(5,3);
    printPattern1(0,3);
    printPattern1(7,-1);
    return 0;
}
void printPattern1(int N,int M) //* N คือ จำนวนบรรทัด M คือ จำนวนตัว
{
    if(N<=0 || M<=0)
    {
        cout << "Invalid input\n\n";
    }else
    {
        for(int i=1;i<=N;i++)
        {
            if(i%2==0) //? แถวเลขคู่
            {
                for(int j=1;j<=M;j++)
                {
                    if(j%2==0) cout << 'O'; //! ตำแหน่งเลขคู่
                    else cout << 'x';
                }
            cout << "\n";
            }else //? แถวเลขคี่
            {
                for(int j=1;j<=M;j++)
                {
                    if(j%2==0) cout << 'x'; //! ตำแหน่งเลขคู่
                    else cout << 'O';
                }
                cout << "\n";
            }
        }
        cout << "\n";
    }
}