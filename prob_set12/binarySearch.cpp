#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int [],int,int);
void show(int [],int);
bool movetomax(int [],int);
void bubblesort(int [],int);
int binarySearch(int [],int,int);
int main()
{
    int data[] = {1,8,9,15,56,752,44,44};
    int N = sizeof(data)/sizeof(data[0]);
    int key;
	cout << "Input a number to search: ";
    cin >> key;
    
    cout << "Sorted data: ";
	bubblesort(data,N);
	show(data,N);
	
	cout << "want continue press ENTER\n";
	cin.get();
	
	int loc = binarySearch(data,N,key);
	cout << "\n";
	
	if(loc == -1) cout << "Not found";
	else cout << "Found at data[" << loc << "]";
    
    return 0;
}
void swap(int d[],int a,int b)
{
    int temp = d[a];
    d[a] = d[b];
    d[b] = temp;
}
void show(int d[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout << d[i] << " ";
    }
    cout << "\n";
}
bool movetomax(int d[],int e)
{
    bool swap_flag=false;
    for(int i=0;i<e-1;i++)
    {
        if(d[i] > d[i+1]) 
        {
        swap(d,i,i+1);
        swap_flag=true;
        }
    }
    return swap_flag;
}
void bubblesort(int d[],int N)
{
    for(int end=N;end>1;end--)
    {
        bool didSwap = movetomax(d,end);
        if(!didSwap) break;
    }
}
int binarySearch(int d[],int N,int key)
{
	cout << "Comparison Sequence: ";
	int first = 0,last = N-1,mid;
	do{
		mid = (first+last)/2;
		cout << d[mid] << " ";
		if(d[mid] == key) return mid;
		else if(d[mid] > key) last = mid-1;
		else first = mid+1;
	}while(first <= last);
	return -1;
}
