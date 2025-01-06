#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stack<char> num;
    cin >> s;


    for(char x : s){
        if(x == '1' && !num.empty() && num.top() == '1'){
            num.pop();
        } else{
            num.push(x);
        }
    }

    string res;
    while(!num.empty()){
        res= num.top()+res;
        num.pop();
    }
    cout << res;


    
    
}