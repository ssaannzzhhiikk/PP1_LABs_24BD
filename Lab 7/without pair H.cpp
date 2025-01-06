#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    int lone = vec[0];
    for(int i = 1; i < n; i++){
        if(i+1<n && vec[i-1] < vec[i] && vec[i] < vec[i+1] ){
            lone = vec[i];
        } else if(i == n-1 && vec[i] != vec[i-1]){
            lone = vec[i];
        }
    }

    cout << lone;
}