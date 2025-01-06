#include <bits/stdc++.h>
using namespace std;

int counteven(string s){
    int l = s.size();
    if (l > 0) {
        if ((s[l - 1] - '0') % 2 == 0) {
            return 1 + counteven(s.substr(0, l - 1));
        } else {
            return counteven(s.substr(0, l - 1)); 
        }
    }
    return 0; 
}

int main()
{
    string s;
    cin >> s;
    cout << counteven(s);
}