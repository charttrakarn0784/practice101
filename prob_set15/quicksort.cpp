#include<iostream>
using namespace std;

template <typename T>
void quicksort(T *,T *);

template <typename T>
T * partition(T *,T *);

template <typename T>
void swap(T *,T *);

int main(){
    int data[10] = {7,2,4,5,6,7,0,1,9,3};
    int *p1 = &data[0];
    int *p2 = &data[9];

    quicksort(p1,p2); //A



    for(int *i = p1;i <= p2;i++){
        cout << *i << " ";
    }

    return 0;
}
template<typename T>
void quicksort(T *lo,T *hi){
    T *p = partition(lo,hi);
    if(p-1 > lo) quicksort(lo,p-1);
    if(hi > p+1) quicksort(p+1,hi);
}

template <typename T>
T * partition(T *lo,T *hi){
    T pivot = *hi;
    int *i = lo;
    for(int *j=lo; j < hi;j++){
        if(*j <= pivot){ //F
            swap(i,j);
            i++; //G
        }
    }
    swap(i,hi);
    return i;
}

template<typename T>
void swap(T *x,T *y){
    T temp = *x;
    *x = *y;
    *y = temp;
}
