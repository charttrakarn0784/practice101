#include<iostream>
using namespace std;
int findLoc(int [],int,int);
int main()
{
    int data[] = {1,4,7,33,6,43,2,1};
    int N = sizeof(data)/sizeof(data[0]);
    int key;
    cout << "Input a number to search: ";
    cin >> key;
    int loc = findLoc(data,key,N);
    if(loc == -1) cout << "Error 404 not found";
    else cout << "find loc at data[" << loc << "]\n";
    
}
int findLoc(int b[],int key,int N)
{
    for(int i = 0; i<N ;i++)
    {
        if(b[i] == key)   return i;
    }
    return -1;
}