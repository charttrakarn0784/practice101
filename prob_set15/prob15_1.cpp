#include<iostream>
using namespace std;

int sumNonZero(int *,int **,int **);

int main()
{
    int A[] = {0,0,1,1,0,1,0,2,1,0,1,0,0,0,0,0,0,0,0,0,1,3,0};
    int sum;
    int *start, *end;

    sum = sumNonZero(A,&start,&end);

    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n";
    cout << "end = " << end << "\n";
    cout << "length = " << end-start+1 << "\n";
    cout << "-------------------------------------\n";

    sum = sumNonZero(end+1,&start,&end);

    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n";
    cout << "end = " << end << "\n";
    cout << "length = " << end-start+1 << "\n";
    cout << "-------------------------------------\n";

    sum = sumNonZero(end+1,&start,&end);

    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n";
    cout << "end = " << end << "\n";
    cout << "length = " << end-start+1 << "\n";
    cout << "-------------------------------------\n";

    sum = sumNonZero(end+1,&start,&end);

    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n";
    cout << "end = " << end << "\n";
    cout << "length = " << end-start+1 << "\n";
    cout << "-------------------------------------\n";

    sum = sumNonZero(end+1,&start,&end);

    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n";
    cout << "end = " << end << "\n";
    cout << "length = " << end-start+1 << "\n";
    cout << "-------------------------------------\n";


    return 0;
}
int sumNonZero(int *d,int **s,int **e)
{
    int i = 0,sum = 0;
    while(*(d+i) == 0)
    {
        i++;
    } 
    *s = &*(d+i);
    while(*(d+i) > 0){
        sum += *(d+i);
        i++;
    }
    *e = &*(d+i-1);
    return sum;
}