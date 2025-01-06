#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int up = 0, dw = 0, len = s.size();
    for(int i = 0; i < len; i++){
        if(isupper(char(s[i]))){
            up++;
        } else{
            dw++;
        }
    }
    cout << dw << " " << up;
}