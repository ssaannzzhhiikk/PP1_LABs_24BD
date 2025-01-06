#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    bool ans = true;

    if (s.size() > t.size() || t.size() % s.size() != 0){
        ans = false;
    }

    for (int i = 0, j = 0; i < s.size(); i++, j++){
        if (i == s.size()){
            i -=s.size();
        }
        if (s[i] != t[j]){
            ans = false;
        }
    }

    if(ans){
        cout <<"YES";
    } else{
        cout <<"NO";
    }
}
