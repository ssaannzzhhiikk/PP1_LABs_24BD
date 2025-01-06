#include <bits/stdc++.h>
using namespace std;

bool binsearch(int arr[], int low, int high, int target){
    if(low > high){
        return false;
    }
    int mid = low + (high-low) / 2;
    if(arr[mid] == target){
        return true;
    }
    if(arr[mid] > target){
        return binsearch(arr, low, mid-1, target);
    }
    return binsearch(arr, mid + 1, high, target);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int t;
    cin >> t;
    if( binsearch( arr, 0, n-1, t) ){
        cout << "Yes";
    } else{
        cout << "No";
    }

}