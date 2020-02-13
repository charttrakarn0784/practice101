#include<iostream>
using namespace std;

template <typename Type>
void insert(const Type [],Type [], int, Type, int);

int main()
{
    int N = 4;
    int x[N] = {1,4,9,7}, y[N+1],z[N+1],w[N+1];

    insert(x,y,N,69,2); //insert value 69 at index 2
    insert(x,z,N,77,0); //insert value 77 at index 0
	insert(x,w,N,112,3); 

    cout << "x = "; //! show default x
    for(int i = 0;i < N;i++) cout << x[i] << " ";

    cout << "\ny = ";
    for(int i = 0; i < N+1;i++) cout << y[i] << " ";

    cout << "\nz = ";
    for(int i = 0; i < N+1;i++) cout << z[i] << " ";
    
    cout << "\nw = ";
    for(int i = 0; i < N+1;i++) cout << w[i] << " ";

    return 0;
}
//write function here
template <typename Type>
void insert(const Type x[],Type y[], int N, Type a, int b)
{
    int cnt = 0;
	for(int i = 0;i < N+1;i++)
    {
		if(i == b && b == 0) {
			y[i] = a;
			continue;
		}
		else if(i == b){
			y[i] = a;
			cnt--;
		}
        else {
			y[i] = x[cnt];
		}
		cnt++;
    }
}
