#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++) {
        int l, r;
        cin >> l >> r;

        int counter = 0;
        int maxHeight = 0;  
        for (int j = l; j <= r; j++) {
            if (q[j] > maxHeight) {
                counter++;
                maxHeight = q[j];
            }
        }

        arr[i] = counter; 
    }

    for(int i = 0; i < a; i++){
        cout << arr[i] << endl;
    }
}
