#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int lens = s.size();
    int lent = t.size();
    int freqS[26] = {0};
    int freqT[26] = {0};

    for (int i = 0; i < s.length(); ++i) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }
    bool ap = true;
    for (int i = 0; i < 26; ++i) {
        if (freqS[i] != freqT[i]) {
            ap = false;
            break;
        }
    }
    if(ap){
        cout << "YES";
    } else{
        cout << "NO";
    }

}
