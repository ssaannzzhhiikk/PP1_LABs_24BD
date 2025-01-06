#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i++){
        if(i % 2 == 0){
            cout << char(toupper(s[i]));
        } else{
            cout << s[i];
        }
    }
}