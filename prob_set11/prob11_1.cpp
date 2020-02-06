#include<iostream>
using namespace std;

template<typename T>
T shifting(T,int);

int main()
{
    cout << shifting (5.5,'A'); //! int('A') = 65
}

template<typename T>
T shifting (T x,int y)
{   return x+y;}