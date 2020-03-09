#include<iostream>
#include<cmath>
using namespace std;
int findPOW(int n)
{
	if(n == 0) return 0;
	else if(n == 1) return 2;
	return pow(2,n)+findPOW(n-1);
    
}
int main()
{
    cout << findPOW(0) << "\n";
	cout << findPOW(1) << "\n";
	cout << findPOW(2) << "\n";
	cout << findPOW(3) << "\n";
	cout << findPOW(4) << "\n";
	return 0;
}


