#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    for(int i = 0; i < len; i++){
        char let = s[i];
        int dig = int(let);
        if(dig == 32){
            cout << let;
        }
        else if(dig == 122 || dig == 90){
            cout << char(dig - 25);
        } 
        else if(dig>=65 && dig<=90 || dig >= 97 && dig <= 122){
            cout << char(let+1);
        } else{
            cout << let;
        }
    }
}