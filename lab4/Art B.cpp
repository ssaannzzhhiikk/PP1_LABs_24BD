#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w, h, n, x1, y1, x2, y2;
    cin >> w >> h >> n;
    int arr[w][h];

    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            arr[i][j] = 0;
        }
    }


    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2>> y2;
        for(int j = y1; j < y2; j++){
            for(int k = x1; k < x2; k++){
                arr[j][k] = 1;
            }
        }
    }
    int count=0;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
