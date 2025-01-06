#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            cin >> arr[i][j];
        }
    }
    int r = 0;
    int c = 0;
    int mx = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            if( arr[i][j] > mx){
                mx = arr[i][j];
                r = i;
                c = j;
            }
        }
    }
    cout << r+1<< ' '  << c+1;

}