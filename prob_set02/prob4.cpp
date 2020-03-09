#include<iostream>
using namespace std;
int main()
{
	int n,i,ans;
	cout << "Enter n: ";
	cin >> n;
	i = n;
	while(i > 0){
		ans=ans*i;
		i=i-1;
	}
	cout << n <<"! = " << ans;
	return 0;	
}
