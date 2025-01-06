#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool ap = true;
    int cnt = 0;
    int len = s.size();

    if(s[0] != '(' && s[len-1] != ')' && ap){
        ap = false;
        cout << "NO";
    }
    else if(len % 2 != 0){
        ap = false;
        cout << "NO";
    }

    else{
        for(int i = 0; i < s.size(); i++){

            if(s[i] == '('){
                int j = 0;
                while(s[j] != ')' && j < len){
                    j++;
                }
                if(s[j] == ')' && i < j){
                    s[i] = ' ';
                    s[j] = ' ';
                    cnt++;
                }
            }
        }
    }

    if(len/2 == cnt && ap){
        cout << "YES";
    } else if(ap){
        cout << "NO";
    }
}