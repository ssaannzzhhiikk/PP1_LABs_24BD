#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ap = -1;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        ap = s.find("@gmail.com");
        if(ap >= 0){
            cout << s.substr(0, ap) << endl;
        }
    }
}
