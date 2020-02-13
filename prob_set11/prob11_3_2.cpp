#include<iostream>
#include<cmath>
using namespace std;
double findROOT(double n)
{
	if(n == 1) return 1;
	return sqrt(n*sqrt(n-1));
}
int main()
{
    cout << findROOT(1) << "\n";
    cout << findROOT(2) << "\n";
    cout << findROOT(3) << "\n";
    cout << findROOT(4) << "\n";
	return 0;
}
