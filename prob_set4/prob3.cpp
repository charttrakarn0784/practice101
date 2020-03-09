#include<iostream>
#include<cmath>
using namespace std;

double findKineticEnergy(double m,double v){
	double E;
	E = 0.5*m*pow(v,2);
	return E;
}

int main(){
	double m,v;
	cout << "Enter Mass: ";
	cin >> m;
	cout << "Enter Velocity: ";
	cin >> v;
	cout << "Kinetic Energy is " << findKineticEnergy(m,v);
	
	return 0; 
}
