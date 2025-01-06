#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> skus(n);
    int actual_sum = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> skus[i];
        actual_sum += skus[i];
    }
    
    int expected_sum = n * (n + 1) / 2;
    
    int missing_sku = expected_sum - actual_sum;
    
    cout << missing_sku << endl;
    return 0;
}
