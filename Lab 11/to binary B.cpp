#include <bits/stdc++.h>
using namespace std;

string bin(int n){
    string s = "";
    if(n == 0){
        return "";

    } else{
        return bin(n/2) + to_string(n % 2);
    }
}

int main()
{
    int n; cin >> n;
    cout << bin(n);
}