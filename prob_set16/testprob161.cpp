#include<iostream>
#include<iomanip>
using namespace std;

void myMatrix(int ***,int );
void freeSpace(int **,int );

int main()
{
    int N;

    cout << "N = ";
    cin >> N;
    
    int **p;

    //myMatrix(&p,N);

	for(int i=0;i < N; i++){
        for(int j=0;j<N;j++){
            cout << setw(4) << &p[i][j] <<"\t" ;
        }
        cout << "\n";
    }

    //freeSpace(p,N);

    return 0;
}

void myMatrix(int ***pPtr,int N)
{
	int **p = *pPtr;
	p = new int *[N]; //p = ***p,*p = **p ,**p = *p
    for(int i=0;i<N;i++) p[i] = new int [N];
    
	for(int i=0;i < N; i++){
        for(int j=0;j < N;j++){
            p[i][j] = i+j;
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
