#include <bits/stdc++.h>
using namespace std;

int deg2(int n){
    if(n == 0){
        return 1;
    } else{
        return  2 * deg2(n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << deg2(n);
}