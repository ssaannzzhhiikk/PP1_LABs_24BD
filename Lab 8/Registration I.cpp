#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_set<string> names;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
   
        if(names.count(temp)){
            cout << "user already exists" << endl;
        } else{
            names.insert(temp);
            cout << "new user added" << endl;
        }
    }


}