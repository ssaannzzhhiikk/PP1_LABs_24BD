#include <bits/stdc++.h>
using namespace std;
bool issquare(int num){
    for(int i = 4; i <= 9; i++){
        if(i*i == num) return true;
    }
    return false;
}

int main()
{
    string input;
    cin >> input;

    stack<char> st;

    for(char ch : input){
        if(!st.empty()){
            int lastDigit = st.top() - '0';
            int currentDigit = ch - '0';
            int num = lastDigit * 10 + currentDigit;

            if(issquare(num)){
                st.pop();
                continue;
            }
        }
        st.push(ch);
    }

    if(st.empty()){
        cout << "Stack is empty" << endl;
    } else{
        string res;
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        cout << res << endl;
    }
    
}