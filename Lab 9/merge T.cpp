#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int num; cin>>num;
        v.push_back(num);
    }

    cin >> m;
    for(int i = 0; i < m; i++){
        int num; cin>>num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for(int x : v){
        cout << x << " ";
    }
}