#include<iostream>
#include<cmath>
using namespace std;

//Write prototype of function fibonacci() here
long long int fibonacci(int);

int main(){
	cout << fibonacci(0) << "\n";
	cout << fibonacci(1) << "\n";
	cout << fibonacci(2) << "\n";
	cout << fibonacci(15) << "\n";
	cout << fibonacci(30) << "\n";
	cout << fibonacci(50) << "\n";
	
	return 0;
}

long long int fibonacci(int n)
{
	double P = ((1+sqrt(5))/2);
	return (pow(P,n)-pow((1-P),n))/sqrt(5);
}
//Write definition of function fibonacci() here
/*
??? fibonacci(???){
  
}
*/
