#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int c = 0;
    for(int i = 0; i < n; i++){
        c+= a[i];
    }
    int avg = c/n;

    if(avg < k){
        cout << (avg - k) * (-1);
    } else{
        cout << avg - k;
    }
}