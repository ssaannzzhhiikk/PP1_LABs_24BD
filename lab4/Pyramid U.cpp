#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && i < j) || (i == j) || (j == 0 && i > j) || (j == n - i - 1) || (j == n-1 && j > i) || (i == n-1 && j < i) ) {
                cout << "  *  ";
            } else {
                sum += arr[i][j]; 
                cout << arr[i][j] << " "; 
            }
        }
        cout << endl;  
    }
    cout << sum;

    return 0;
}
