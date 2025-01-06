#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[1001] = {0};
    string s;
    getline(cin, s);
    istringstream stream(s);
    int num;
    while(stream >> num){
        a[num] = num;
    }

    int x;
    cin >> x;
    bool ap =true;
    int cnt = 0;
    for(int i = 1; i < 1001; i++){
        if(x == cnt){
            ap = false;
            cout << i-1;
            break;
        } 
        if (a[i] == 0 && cnt != x){
            cnt++;
        }
    }

    if(ap == true){
        cout<<"-1";
    }
}