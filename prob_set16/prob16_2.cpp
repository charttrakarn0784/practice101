#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	ifstream source("score.txt");
    vector<double> v;
    
    string textline;
    while(getline(source,textline)){
        v.push_back(atof(textline.c_str()));
    }

    for(int i=0;i<v.size();i++) cout << v[i] << "\n";
}
