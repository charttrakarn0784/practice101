#include<iostream>

using namespace std;

//Write prototype of function fibonacci() here
long long int fibonacci(int);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(3) << "\n";
	cout << fibonacci(4) << "\n";
	// cout << fibonacci(30) << "\n";
	// cout << fibonacci(50) << "\n";
	
	return 0;
}

long long int fibonacci(int x)
{
	int sum = 1,i = 1,temp1 = 0,temp2 = 0;
	if(x == 0) return 0;
	else if(x == 1) return 1;
	else if(x > 1)
	{
		while(i < x)
		{
			sum += temp1;
			temp1 = sum;
			i++;
		}
		return sum;
	}
	else return x=0;
}