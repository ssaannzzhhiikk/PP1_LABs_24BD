#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool ap = true; 
    while(n != 0){
        int last = n % 10;
        if(last % 2 == 1){
            ap = false;
        }
        n /= 10;
    }

    if(ap){
        cout << "Valid";
    } else{
        cout << "Not valid";
    }
}