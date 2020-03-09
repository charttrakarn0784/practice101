#include<iostream>
using namespace std;

int greatDivisor(int x){
	int i;
	if(x == 1){
		return x;
	}else{
		i = x-1;
	}
	while(i < x){
		if(x%i == 0){
			return i;
			break;
		}else{
			i--;
			}	
		}
	}

int main(){
	int x;
	cout << "Enter x: ";
	cin >> x;
	cout << "greatDivisor("<<x<<");\n" << greatDivisor(x);
	return 0;
}
