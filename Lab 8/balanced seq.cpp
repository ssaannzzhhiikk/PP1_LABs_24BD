#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> checker;
    for(int i = 0; i < s.length(); i++){
        if(!checker.empty() && checker.top() == s.at(i))
            checker.pop();
        else
            checker.push(s[i]);
    }
    if(checker.empty())
        cout << "YES";
    else
        cout << "NO";
}
/*sbaabsss*/
/*sb 1*/
