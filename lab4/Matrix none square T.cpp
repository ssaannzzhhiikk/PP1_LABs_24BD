#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            if(i + 1 < n && j + 1 < m ){
                if(arr[i][j] == arr[i][j+1] && arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+1][j+1] ){
                    cnt++;
                }
            }
        }
    }

    if(cnt > 0){
        cout << "NO";
    } else {
        cout << "YES";
    }

    /* 00 01 02
       10 11 12
       20 21 22
    */
}