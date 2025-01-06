#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int sumdiag = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == n - i - 1){
                sumdiag += arr[i][j];
            }
        }
    }
    cout << sumdiag;

    /* 00 01 02
       10 11 12
       20 21 22
    */
}