#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    for (int i = 0; i < n; i++) {
        int discount = 0;
        for (int j = i + 1; j < n; j++) {
            if (prices[j] <= prices[i]) {
                discount = prices[j];
                break;
            }
        }
        prices[i] -= discount;
    }

    for (int i = 0; i < n; i++) {
        cout << prices[i] << " ";
    }
    cout << endl;

    return 0;
}
