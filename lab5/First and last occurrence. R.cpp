#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char t;
    cin >> s >> t;
    int len = s.size();
    int first = -1, last = -1;
    for(int i = 0; i < len; i++){
        if(s[i] == t){
            last = i;
        }
    }
    for(int i = 0; i < len; i++){
        if(s[i] == t){
            first = i;
            break;
        }
    }
    if(first >=0 && last >= 0 && first != last){
        cout << first << " " << last;
    } else if(last == first){
        cout << last;
    }
}