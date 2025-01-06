#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>> arr[i][j];
        }
    }

    for(int j = 0; j < n; j++){
        int mx = arr[j][0];
        for(int k = 0; k < n; k++){
            if(arr[j][k] > mx){
                mx = arr[j][k];
            }

        }
        for(int k = 0; k < n; k++){
            cout << mx << " ";
        }
        cout << endl;
    }
}