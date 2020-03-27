#include<iostream>

using namespace std;

class Item{
	public:
		int hpmax;
		int atk;
		int def;
		Item(int,int,int);
};

class Unit{
	private:
		string name;
		int hpmax;
		int atk;
		int def;
	public:
		Unit(string,int,int,int);
		void operator+=(Item &);
		friend ostream & operator<<(ostream &,Unit &);
};

Item::Item(int a,int b,int c){
	hpmax = a;atk = b; def = c;
}

Unit::Unit(string s,int a,int b,int c){
	name = s; hpmax = a; atk = b; def = c;
}

void Unit::operator+=(Item &x){
	hpmax += x.hpmax;
	atk += x.atk;
	def += x.def;
}

ostream & operator<<(ostream &os, Unit &u){
	return os << u.name << ": HPMAX = " << u.hpmax << " ATK = " << u.atk << " DEF = " << u.def << "\n";
}

int main(){
	Unit hero("Prayath",10,5,5);
	cout << hero;
	Item beer(5,1,1), mala(0,2,0);
	hero+=beer;
	cout << hero;
	hero+=mala;
	cout << hero;
	hero+=beer;
	cout << hero;
	return 0 ;
}
