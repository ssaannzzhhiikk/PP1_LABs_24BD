#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n, c=0;
    cin >> s >> n;
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(isdigit(s[i])){
            c++;
        }
    }
    if(c >= n){
        cout << "YES";
    } else{
        cout << "NO";
    }
}