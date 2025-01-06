#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    for(int i = 0; i < n; i++){
        bool ap = true;
        for(int j = 0; j < i;j++){
            if(vec[i] == vec[j]){
                ap = false;
            }
        }
        if(ap){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}