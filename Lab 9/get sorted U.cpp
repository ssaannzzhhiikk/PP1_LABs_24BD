#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n), sortedArr;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int mismatchCount = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != sortedArr[i]) {
            ++mismatchCount;
        }
    }

    if (mismatchCount == 0 || mismatchCount == 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
