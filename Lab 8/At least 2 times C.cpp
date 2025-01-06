#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());
    int cnt = 0;

    for(int i = 0; i < n; ) {
        int count = 1;
        while(i + count < n && nums[i] == nums[i + count]) {
            count++;
        }
        if(count >= 2) {
            cnt++;
        }
        i += count;
    }

    cout << cnt;

}
