#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i++){
        char let = char(s[i]);
        if(int(let) == 122){
            cout << char(97);
        } else{
            cout << char(let+1);
        }
    }
}