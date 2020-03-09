#include<iostream>
using namespace std;

int myFunc(int x){
	if(x > 5){
		cout << "A";
		return x;
	}
	return 2*x;
}
int main(){
	cout << myFunc(2) << myFunc(6);
	return 0;
}

