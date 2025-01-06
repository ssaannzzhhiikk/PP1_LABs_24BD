#include <iostream>
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

    int mx = arr[0][0], sum = 0;
    for(int i = 0; i < n; i++){ //find first max
        for(int j = 0; j < n; j++){
            if(arr[i][j] > mx){
                mx = arr[i][j];
            }
            sum += arr[i][j];
        }
    }

    int secmx = arr[0][0];
    for(int i = 0; i < n; i++){ //find second max
        for(int j = 0; j < n; j++){
            if(arr[i][j] > secmx && arr[i][j] < mx){
                secmx = arr[i][j];
            }
        }
    }
    if(sum / (n*n) != arr[0][0]){
        cout << secmx;
    } else{
        cout << 0;
        }
}