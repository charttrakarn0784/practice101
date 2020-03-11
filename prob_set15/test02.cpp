#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int Muneh[5] = {20,50,100,500,1000};
    int *mPtr[5]; //TODO Arrays of Pointer
    *mPtr = &Muneh[0];*(mPtr+1) = &Muneh[1];*(mPtr+2) = &Muneh[2];*(mPtr+3) = &Muneh[3];*(mPtr+4) = &Muneh[4];

    for(int i=0;i<5;i++) cout << "mPtr[" << i << "] = " << *(mPtr+i) << endl;
    
    int temp,idx1,idx2,count;
    srand(time(0));
    for(int j=0;j<10;j++)
    {
        do{
        idx1 = rand()%5;
        idx2 = rand()%5;
        temp = *mPtr[idx1];
        *mPtr[idx1] = *mPtr[idx2];
        *mPtr[idx2] = temp;
        count++; 
        }while(count < 100);
        cout << Muneh[0] << " " << Muneh[1] << " " << Muneh[2] << " " << Muneh[3] << " " << Muneh[4] << " " << endl;
    }

    return 0; 
}