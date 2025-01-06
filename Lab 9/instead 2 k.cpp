#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pos;
    cin >> n >> pos;
    vector<int> arr;
    for(int i = 0; i < n;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    rotate(arr.begin(), arr.begin()+pos,arr.end());
    reverse(arr.begin(), arr.end());
    for(int i : arr){
        cout << i << ' ';
    }
}