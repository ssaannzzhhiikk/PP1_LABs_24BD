#include <bits/stdc++.h>
using namespace std;

void same(int a[], int b[], int n){
    sort(a, a+n);
    sort(b, b+n);
    int counter = 0, i = 0, j = 0;
    while (i < n && j < n) {
        if (a[i] == b[j]) {
            counter++;
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    cout << counter;
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

    same(a, b, n);
}