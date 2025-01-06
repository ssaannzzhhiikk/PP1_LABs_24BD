#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxArea = 0;
    
    for (int i = 0; i < n; i++) {
        int minVal = INT_MAX; 
        for (int j = i; j < n; j++) {
            minVal = min(minVal, arr[j]);
            int area = (j - i + 1) * minVal;
            maxArea = max(maxArea, area);
        }
    }

    cout << maxArea;
}
