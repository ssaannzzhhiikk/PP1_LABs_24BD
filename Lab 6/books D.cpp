#include <bits/stdc++.h>
using namespace std;

void find(int n, int a[], int x){
    bool ap = false;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            ap = true;
            break;
        }
    }
    if(ap){
        cout << "Yes";
    } else{
        cout << "No";
    }
}

int main(){
    int n, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;

    find(n , a, x);
}