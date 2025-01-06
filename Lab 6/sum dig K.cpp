#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c = 0;
    cin >> n;
    while(n != 0){
        int last = n % 10;
        c += last;
        n /= 10;
    }

    cout << c;
}