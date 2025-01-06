#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> bead;
    for(int i = 0; i < n; i++){
        int num; cin >> num;
        bead.push_back(num);
    }

    auto p = unique(bead.begin(), bead.end());
    bead.erase(p, bead.end());

    for(int i:bead){
        cout << i << " ";
    }
}