#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "coordinates of min elements:" << endl;
    int sum = 0;
    for(int i = 0; i < m; i++){
        int mn = arr[0][i];
        int je = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][i] < mn){
                mn = arr[j][i];
                je = j;
            }
        }
        cout << je + 1 << ";" << i + 1 << endl;
        sum+=mn;
    }
    cout << "\n";
    cout << "Their sum:" << endl;
    cout << sum;

}