#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<string> att;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        att.insert(s);
    }
    cout << att.size();
}