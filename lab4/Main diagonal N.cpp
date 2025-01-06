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

    int mx = arr[0][0];
    int in = 0;
    int jk = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j && arr[i][j] > mx){
                mx = arr[i][j];
                in = i;
                jk = j;
            }
        }
    }
    //Maximum element is: -1 with coordinates: 1;1
    cout << "Maximum element is: " << mx << " with coordinates: " << in+1 << ";" << jk+1;
}