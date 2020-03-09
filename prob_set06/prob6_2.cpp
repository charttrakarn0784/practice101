#include<iostream>
using namespace std;
char func1(char x);
int main()
{
    cout << func1('A') << "\n";
    cout << func1('a') << "\n";
    cout << func1('Z') << "\n";
    cout << func1('z') << "\n";
    cout << func1('6') << "\n";
    cout << func1('U') << "\n";
    cout << func1('i') << "\n";
    return 0;
}
char func1(char x)
{
    char vowel[10] = {'A','E','I','O','U','a','e','i','o','u'}; //*vowel แปลว่า สระ
    int i = 0;
    bool check = false;
    while(i < 10)
    {
        if(x == vowel[i]) check = true;
        i++;
    }
    if(check) x = 'y';
    else x = 'n';
    
    return x;
}