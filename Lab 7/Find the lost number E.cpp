#include <iostream>
#include <vector>
using namespace std;

int findnum(int n, vector<int> skus){
    int actual_sum = 0;
    for (int i = 0; i < n; ++i) {
        actual_sum += skus[i];
    }

    int expected_sum = n * (n + 1) / 2;

    return expected_sum - actual_sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> skus(n);
    for (int i = 0; i < n; ++i) {
        cin >> skus[i];
    }
    cout << findnum(n, skus);
    
}