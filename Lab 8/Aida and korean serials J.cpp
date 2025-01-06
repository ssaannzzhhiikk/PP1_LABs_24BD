#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> doramas;
    for(int i = 0; i < n; i++){
        string names;
        int series;
        cin >> names >> series;
        doramas[names]+=series;
    }

    for(const auto& x : doramas){
        cout << x.first << " " << x.second << endl;
    }
}