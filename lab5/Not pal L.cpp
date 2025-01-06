#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int shlen = len-1;
    int i = 1;
    bool pal = true;
    if(s[0] != s[len-1]){
        while(i <= shlen){
            if(s[i++] != s[shlen--]){
                pal = false;
            }
        }
        
    }
    if(pal){
        cout << "YES";
    } else{
        cout <<"NO";
    }

}