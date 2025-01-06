#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> t;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        t.push_back(s);
    }
    sort(t.begin(), t.end());

    set<string> u;
    for(int i = 0; i < n;){
        int count = 1;
        while(i+count < n && t[i] == t[i+count]){
            count++;
        }
        if(count == 3){
            u.insert(t[i]);
        }
        i+=count;
    }


    cout << u.size();
}