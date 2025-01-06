#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i++){
        char let = char(s[i]);
        int dig = int(let);
        if(dig>=65 && dig<=90 || dig >= 97 && dig <= 122){
            cout << let;
        }
    }
}