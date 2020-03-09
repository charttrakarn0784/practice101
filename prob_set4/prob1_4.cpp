#include<iostream>
#include<cmath>
using namespace std;

int func1(int x,int y){
	return pow(y,x) + pow(x,y);
}
int func2(int a){
	return func1(a,a-1)+func1(a-1,a-2);
}
int main(){
	cout << func2(4);
	return 0;
}
