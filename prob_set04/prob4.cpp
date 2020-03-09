#include<iostream>
#include<cmath>
using namespace std;

double solveEqt(int x){
	double y;
	y = sin(pow(x,3))/log((2*x+1)/(pow(x,2)));
	return y;
}

int main(){
	double x;
	cout << "Enter x: ";
	cin >> x;
	cout << "y is " << solveEqt(x);
	
	return 0; 
}
