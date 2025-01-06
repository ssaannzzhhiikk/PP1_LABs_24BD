#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();

    int mxap = 1;
    int inap = 1;
    char instr = s[0];
    char maxstr = s[0];

    for(int i = 1; i < len; i++){
        if(s[i] == instr){
            inap++;      
        } else {
            if(inap > mxap){
                maxstr = instr;
                mxap = inap;
            }
            instr = s[i];
            inap = 1;
        }
    }
    if (inap > mxap) {
        maxstr = instr;
        mxap = inap;
    }

    cout << maxstr << " " << mxap;

}