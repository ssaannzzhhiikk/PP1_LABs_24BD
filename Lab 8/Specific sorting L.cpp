#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> arr;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a + b, i + 1});
    }

    sort(arr.begin(), arr.end());
    
    for (const auto& x : arr) {
        cout << x.second << " ";
    }
    cout << endl;
    
    return 0;
}
