#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin >> s >> n;
    int len = s.size();
    bool ap =false;
    for(int i = 0; i < len; i++){
        int c = 0;
        for(int j = i; j < n+i; j++){
            if(isdigit(s[j])){
                c++;
            }
        }
        if(c >= n){
            ap = true;
        }
    }


    if(ap){
        cout << "Valid";
    } else{
        cout << "Not valid";
    }
}