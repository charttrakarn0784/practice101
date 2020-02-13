#include<iostream>
#include<string>
using namespace std;

int main()
{
    int N;
    string s1 = "KAK";
    string s2 = "KAM KAM";
    string s3 = s2;
    if(s1 == "KAK"){
        N = s2.size();
        if(s2[0] == 'K' && s2[N-1] == 'M'){
            for(int i = 0; i<N;i++){
                s3[i] = s2[N-i-1];
            }
        }
    }
    cout << s1+" "+s3 << "\n";
    cout << N;
    return 0;
}