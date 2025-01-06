#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int sumeven = 0;
    int sumodd = 0;
    for(int i = 0; i < len; i++){
        int num = int(s[i]) - '0';
        if(i % 2){
            sumeven+=num;
        } else{
            sumodd+=num;
        }
    }

    if(sumeven==sumodd){
        cout << "YES";
    } else{
        cout << "NO";
    }
}