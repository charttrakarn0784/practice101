#include<iostream>
#include<vector>
using namespace std;

vector<float> removeNegatives(vector<float> &);
void coutVector(vector<float>);

int main()
{
    vector<float> v1,v2,v3,v4;
    v1.push_back(1);v1.push_back(2);v1.push_back(3);v1.push_back(4);v1.push_back(5);v1.push_back(6);
	v2.push_back(0.5);v2.push_back(-2.0);v2.push_back(-3.7);v2.push_back(1.2);
	v3.push_back(0);v3.push_back(0);v3.push_back(1);v3.push_back(1.2);v3.push_back(2.3);v3.push_back(-2.5);
	v4.push_back(-1);v4.push_back(-2);v4.push_back(-3);v4.push_back(-4);
	coutVector(v1);
	coutVector(v2);
	coutVector(v3);
	coutVector(v4);
	cout << "----------------------------\n";
    coutVector(removeNegatives(v1));
    coutVector(removeNegatives(v2));
    coutVector(removeNegatives(v3));
    coutVector(removeNegatives(v4));
}

vector<float> removeNegatives(vector<float> &v){
	for(int i = 0;i<v.size();i++){
        if(v[i] < 0){
        	v.erase(v.begin()+i);
        	i--;
		} 
    }
    return v;
}
void coutVector(vector<float> v){
	cout << "[" << v[0];
	
	for(int i = 1;i<v.size();i++){
		cout << "," << v[i] ;
	}
	cout << "]\n";
}
