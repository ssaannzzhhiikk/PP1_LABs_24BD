#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    for(int i = 0; i< n; i++){
        if(i+1 < n){
            int sum = arr[i] + arr[i+1];
            s.insert(sum);
        }
    }

    cout << s.size();

}