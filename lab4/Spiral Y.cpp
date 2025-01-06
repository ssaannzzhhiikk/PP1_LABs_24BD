#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N][N];
    int value = 1; 
    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;
    
    while (top <= bottom && left <= right) {
        for(int i = left; i <= right; i++){
            arr[top][i] = value++;
        }
        top++;

        for(int j = top; j <= bottom; j++){
            arr[j][right] = value++;  
        }
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--){
                arr[bottom][i] = value++;
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                arr[i][left] = value++;
            }
            left++;
        }
    }






    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
