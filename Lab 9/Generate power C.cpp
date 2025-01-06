#include <bits/stdc++.h>
using namespace std;

long long power(long long n){
    long long num = powl(n, n);
    return num;  
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        cout << power(i) << " ";
    }
}