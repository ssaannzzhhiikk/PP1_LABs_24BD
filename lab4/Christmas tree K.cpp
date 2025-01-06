#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int full = (n*2) - 1;
    int l = n;
    int r = n;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= full; j++){
            if(j >= l && j <= r){
                cout << "*";
            } else {
                cout << ".";
            }
        }
        l--;
        r++;
        cout << endl;
    }

}