#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr1[n-i-1] = arr[i];
    }
    for(int i = 0; i < n;i++ ){
        if(arr[i] != arr1[i]){
            cout << "Instead of " << arr[i] << " here was " << arr1[i] << endl;
        } else{
            cout << "OK" << endl;
        }
    }
    

}