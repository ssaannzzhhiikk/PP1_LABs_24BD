#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c = 0;
    cin >> n;
    int last = n % 10;
    while(n != 0){
        int last = n % 10;
        c += last;
        n /= 10;
    }

    if(c % last == 0){
        cout << "Yes";
    } else{
        cout << "No";
    }
}