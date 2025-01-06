#include <bits/stdc++.h>
using namespace std;

bool cop(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    multimap<int, int> xy;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        xy.insert({x, y});
    }

    vector<pair<int, int>> v(xy.begin(), xy.end());
    sort(v.begin(), v.end(), comp);
    stable_sort(v.begin(), v.end(), cop); 

    for (auto i : v)
        cout << i.first << " " << i.second << endl;

    return 0;
}