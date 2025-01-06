#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> strengths(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> strengths[i];
    }
    
    stack<int> battlefield;
    vector<int> result(n);
    
    for (int i = 0; i < n; i++) {
        int current_strength = strengths[i];
        
        while (!battlefield.empty() && battlefield.top() <= current_strength) {
            battlefield.pop();
        }
        battlefield.push(current_strength);
        result[i] = battlefield.size();
    }
    
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    
    return 0;
}
