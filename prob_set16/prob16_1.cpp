#include<iostream>
#include<iomanip>
using namespace std;

void freeSpace(int **,int);
void myMatrix (int ***, int);

int main()
{
    int **p;
    int N;

    cout << "N = ";
    cin >> N;

    myMatrix(&p,N);

	for(int i=0;i < N; i++){
        for(int j=0;j<N;j++){
            cout << setw(4) << p[i][j] ;
        }
        cout << "\n";
    }

    freeSpace(p,N);

    return 0;
}
void myMatrix(int ***p,int N)
{
	int **k = *p;
	k = new int *[N]; //p = ***p,*p = **p ,**p = *p
    for(int i=0;i<N;i++) k[i] = new int [N];
    
	for(int i=0;i < N; i++){
        for(int j=0;j < N;j++){
            k[i][j] = i+j;
            //cout << k[i][j] << " ";
        }
        //cout << "\n";
    }
    
	/*for(int i=0;i < N; i++){
        for(int j=0;j < N;j++){
            cout << &p[i][j] << "--" ;
        }
        cout << "\n";
    }*/
}
void freeSpace(int **p,int N)
{
    for(int i=0;i<N;i++) delete [] p[i];
    delete [] p;
}
