#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string vow = "aeiuo";
    cin >> s;
    int cnt = 0;
    int len = s.size();
    for(int i = 0; i < len; i++){
        int at=-1;
        at = vow.find(s[i]);
        if(at >= 0){
            cnt++;
        }
    }
    cout << cnt;
}