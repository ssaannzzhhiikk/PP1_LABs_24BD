#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int a = -1;
    a = s.find(t);
    if(a >= 0){
        cout << "YES";
    } else{
        cout << "NO";
    }
}