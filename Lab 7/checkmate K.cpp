#include <bits/stdc++.h>
using namespace std;

int sums(int n, const vector<vector<int>>& mat) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

int main() {
    int n, r;
    cin >> n >> r;
    int ar[r];
    vector<vector<int>> mat(n, vector<int>(n, 0)); 
    for(int i = 0; i < r; i++){
        int x, y;
        cin >> x >> y;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if( j == x-1 || k == y-1 ){
                    mat[j][k] = 1;
                }
            }
        }
        ar[i] = sums(n, mat);
    }

    for(int i = 0 ; i < r; i++){
        cout << (n*n) - ar[i] << " ";
    }
}
