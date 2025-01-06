#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int len = s.size();
    for(int i = 0; i < len; i++){
        char y = toupper(s[i]);
        if(y=='A' || y=='E' || y=='I'|| y=='O'|| y=='U'){
            continue;
        } else{
            cout << s[i];
        }
    }
    
}