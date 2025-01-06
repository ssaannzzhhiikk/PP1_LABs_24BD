#include <bits/stdc++.h>
using namespace std;

void dif(int a[], int b[], int raz){
    for(int i = 0; i < raz; i++){
        if(a[i] > b[i]){
            cout << a[i] - b[i] << " ";
        } else{
            cout << b[i] - a[i] << " ";
        }

    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    dif(a, b, n);
}