#include<iostream>
#include<string>
using namespace std;
string pTu(int Face,int Habit);
int main()
{
    cout << "status of Ning " << pTu(50,50) << endl;
    cout << "status of Lin " << pTu(60,41) << endl;
    cout << "status of Minnie " << pTu(90,91) << endl;
    cout << "status of Ka'Nee " << pTu(30,35) << endl;
}
string pTu(int Face,int Habit)
{
    string output;
    if(Face > 80)
    {
        if(Habit > 50)
        {
            output = "Girlfriend";
        }else{
            output = "One-night-stand";
        }
    }else if (Face > 50)
    {
        if(Habit > 50)
        {
            output = "Friend";
        }else{
            output = "One-night-stand";
        }
    }else
    {
        if(Habit > 50)
        {
            output = "Friend";
        }else{
            output = "Unfriend";
        }
    }
    return output;
}