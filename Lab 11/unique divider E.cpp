#include <bits/stdc++.h>
using namespace std;

bool ispower2(long long n){
    if(n == 1){
        return true;
    } 
    if(n%2 != 0 || n == 0){
        return false;
    }
    return ispower2(n/2);
}

int main()
{
    int n;
    cin >> n;
    if(ispower2(n)){
        cout << "Yes";
    } else{
        cout << "No";
    }
    
}