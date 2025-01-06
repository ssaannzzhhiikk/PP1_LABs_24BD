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
    bool ras = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] != arr[j][i]){
                ras = false;
            }
        }
    }
    if(ras){
        cout << "Perfect.";
    } else {
        cout << "Not perfect.";
    }
}