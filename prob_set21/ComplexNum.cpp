#include<iostream>
using namespace std;

class ComplexNumber{
	public:
		double real;
		double imag;
		ComplexNumber(double,double);
		ComplexNumber operator+(const ComplexNumber &);
		ComplexNumber operator-(const ComplexNumber &);
};

ComplexNumber::ComplexNumber(double x = 0,double y = 0){
	cout << "(" << x << ")+(" << y << ")*i was created.\n";
	real = x; imag = y;
} 

ComplexNumber ComplexNumber::operator+(const ComplexNumber &c){
	return ComplexNumber(real+c.real,imag+c.imag);
}


ComplexNumber ComplexNumber::operator-(const ComplexNumber &c){
	return ComplexNumber(real-c.real,imag-c.imag);
}

ostream & operator<<(ostream &os, const ComplexNumber &c){
	return os << "(" << c.real << ")+(" << c.imag << ")*i";
}

ComplexNumber operator+(double s,const ComplexNumber &c){
	return ComplexNumber(s+c.real,c.imag);
}

ComplexNumber operator-(double s,const ComplexNumber &c){
	return ComplexNumber(s-c.real,-c.imag);
}

int main(){
	ComplexNumber a(1,2);
	ComplexNumber b = 1.5+a;
	ComplexNumber c = 5-a;
	cout << b << "\n" << c;
}


