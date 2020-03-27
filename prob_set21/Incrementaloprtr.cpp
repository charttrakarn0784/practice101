#include<iostream>
using namespace std;

class Circle{
	private: 
		double x;
		double y;
		double r;
	public:
		Circle(double,double,double);
		void showDetail();
		void resize(double);
		void move(double,double);
		bool operator==(const Circle &);
		void operator++(); //prefix
		void operator++(int); //postfix
};

Circle::Circle(double a = 0,double b = 0,double c = 1){
	x = a; y=b;r=c;
}

void Circle::showDetail(){
	cout << "x = " << x << ", y = " << y << ", r = " << r << "\n";
}

bool Circle::operator==(const Circle &c){
	if(x == c.x && y == c.y && r == c.r) {
		 return true;
	}
	else{
		return false;
	}
}

void Circle::operator++(){
	r++;
	cout << "Prefix operator (++A) is called.\n";
}

void Circle::operator++(int){
	r++;
	cout << "Prefix operator (A++) is called.\n";
}

int main(){
	Circle A(1,2,3);
	A.showDetail();
	++A;
	A.showDetail();
	A++;
	A.showDetail();
	
	return 0;
}
