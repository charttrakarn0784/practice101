#include<iostream>
using namespace std;

void myFunc(int N){
	int count = 0;
	while(count < N){
		cout << N;
		count++;
	}
	cout << "\n";
}

int main(){
	int i = 1;
	while(i < 5){
		myFunc(i);
		i++;
	}
	return 0;
}
