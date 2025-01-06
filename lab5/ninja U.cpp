#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    string s;
    cin >> c >> s;
    int len = s.size();
    for(int i = 0; i < len; i++){
        char temp = s[i];
        if(temp != c){
            cout << s[i];
        }
    }
}