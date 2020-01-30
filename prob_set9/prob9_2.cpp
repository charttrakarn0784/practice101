#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    ifstream source("score.txt");
    float min,max;
    int count = 0;
    string textline;
    cout << "Enter range of the scores [min,max] for counting: ";
    cin >> min >> max;
    if(max < min)
    {
        cout << "Invalid input.";
    }else
    {
        while(getline(source,textline))
        {
            if( min < atof(textline.c_str()) && max > atof(textline.c_str()) ) count++;
        }
        cout << "The number of students who have scores in this range = " << count;
    }
    source.close();
    
    return 0;
}