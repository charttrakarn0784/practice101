#include<iostream>
using namespace std;

class Circle{
	public:
		double x;
		double y;
		double r;
		Circle(double,double,double);
		void showDetail();
		void resize(double);
		void move(double,double);
};

Circle::Circle(double a = 0,double b = 0,double c = 1){
	x = a; y=b;r=c;
}

void Circle::showDetail(){
	cout << "x = " << x << ", y = " << y << ", r = " << r << "\n";
}

bool operator==(const Circle &c1,const Circle &c2){
	if(c1.x == c2.x && c1.y == c2.y && c1.r == c2.r) {
		 return true;
	}
	else{
		return false;
	}
}

int main(){
	Circle A(1,2,3);
	Circle B(4,5,6);
	
	if(A == B) cout << "yes\n";
	else cout << "no\n";
	
	if(A == Circle(1,2,3)) cout << "yes\n";
	else cout << "no\n";

	return 0;
}
