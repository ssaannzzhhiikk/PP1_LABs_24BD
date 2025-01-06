#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f, cnt = 0;
    cin >> n >> f;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(f == temp){
            cnt++;
        }
    }

    cout << cnt;
}