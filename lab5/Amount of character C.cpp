#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char x;
    int n, cnt = 0;
    cin >> s >> x >> n;
    int len = s.size(); 
    for(int i = 0; i < len; i++){
        if( s[i] == x ){
            cnt++;
        }
    }
    if(cnt == n){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
