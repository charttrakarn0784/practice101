#include<iostream>
using namespace std;

void swap(double x[],int a,int b)
{
    double temp = x[a];
    x[a] = x[b];
    x[b] = temp;
}
void show(double x[],int N)
{
    for(int i = 0;i < N;i++)
    {
        cout << x[i] << " ";
    }
    cout << "\n";
}
void moveMAX2end(double x[],int e)
{
    for(int i = 0;i < e-1;i++) //* END at N-1 if N (N+1=?)
    { 
        if(x[i] > x[i+1]) swap(x,i,i+1);
    }
}
void BubbleSort(double x[],int N)
{
    for(int end = N;end > 1;end--)
    {
        moveMAX2end(x,end); //TODO for sorting
        show(x,N);
    }
}

int main()
{
    double data[] = {6,46,87,121,11,3,11,45,46,11};
    int N = sizeof(data)/sizeof(data[0]);
    cout << "data size is " << sizeof(data) << endl;
    cout << "data[0] size is " << sizeof(data[0]) << endl;
    cout << "Initial: ";
    show(data,N);
    cout << "PROCESSING...\n";
    BubbleSort(data,N);
    return 0;
}