#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> v1(n), v2(m);
    
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }

    auto new_end1 = unique(v1.begin(), v1.end());
    v1.erase(new_end1, v1.end());

    auto new_end2 = unique(v2.begin(), v2.end());
    v2.erase(new_end2, v2.end());

    vector<int> nw;
    int size1 = v1.size(), size2 = v2.size();
    int mx = max(size1, size2);
    
    for (int i = 0; i < mx; i++) {
        if (i < size1) nw.push_back(v1[i]);
        if (i < size2) nw.push_back(v2[i]);  
    }

    auto new_end3 = unique(nw.begin(), nw.end());
    nw.erase(new_end3, nw.end());

    for (int i : nw) {
        cout << i << ' ';
    }
}
