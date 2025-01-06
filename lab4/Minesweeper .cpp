#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m ,k;
    cin >> n >> m >> k;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = 0;
        }
    }

    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        arr[x][y] += 10;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 10){
                if(i-1>=0 && i-1<n && j-1>=0 && j-1<m && arr[i-1][j-1] != 10){
                    arr[i-1][j-1]++; //1
                } if(i-1>=0 && i-1<n && j>=0 && j<m && arr[i-1][j] != 10){
                    arr[i-1][j]++; //2
                } if(i>=0 && i<n && j-1>=0 && j-1<m && arr[i][j-1] != 10){
                    arr[i][j-1]++; //3
                } if(i+1>=0 && i+1<n && j-1>=0 && j-1<m && arr[i+1][j-1] != 10){
                    arr[i+1][j-1]++; //4
                } if(i-1>=0 && i-1<n && j+1>=0 && j+1<m && arr[i-1][j+1] != 10){
                    arr[i-1][j+1]++; //5
                } if(i+1>=0 && i+1<n && j>=0 && j<m && arr[i+1][j] != 10){
                    arr[i+1][j]++; //6
                } if(i+1>=0 && i+1<n && j+1>=0 && j+1<m && arr[i+1][j+1] != 10){
                    arr[i+1][j+1]++; //7
                } if(i>=0 && i<n && j+1 >=0 && j+1<m && arr[i][j+1] != 10){
                    arr[i][j+1]++; //8
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 10){
                cout << "* ";
            } else if(arr[i][j] == 0){
                cout << ". ";
            } else{
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

}