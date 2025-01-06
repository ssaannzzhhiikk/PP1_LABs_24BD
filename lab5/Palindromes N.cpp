#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int l = 0, r = len-1;
    bool ap = true;
    while(l <= r){
        if(s[l] != s[r]){
            ap = false;
        }
        l++;
        r--;
    }
    if(ap){
        cout << "YES";
    } else{
        cout << "NO";
    }
}