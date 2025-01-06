#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> uni;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        int counter = count(uni.begin(), uni.end(), sum);

        arr[i] = counter;

        uni.push_back(sum);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
