#include<iostream>
#include<string>
using namespace std;
int func1(string x);
int main()
{
    cout << func1("XYXXYX") << "\n"; 
    cout << func1("XXYY") << "\n";
    cout << func1("XYYYYY") << "\n";
    cout << func1("XYXY") << "\n";
    cout << func1("XXXXXYYYY") << "\n";
    cout << func1("Y") << "\n";
    return 0;
}

int func1(string x)
{
    int i = 0,cntx = 0,cnty = 0,output; //* cntx,cnty mean count'x',count'Y'
    int L = x.size();
    while(i < L)
    {
        if(x[i] == 'X')
        {
            cntx++;
        }else if(x[i] == 'Y')
        {
            cnty++;
        }
        i++;
    }
    if(cntx > cnty)
    {
        output = 1;
    }else if(cntx < cnty)
    {
        output = -1;
    }else
    {
        output = 0;
    }
    return output;
}