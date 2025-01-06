#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, string> db;
    for(int i = 0; i < n; i++){
        string input, key, value;
        cin >> input;

        if(input == "set"){
            cin >> key >> value;
            if(db.count(key) == 1){
                db[key] = value;
            } else{
                db.insert({key, value});
            }
        } 
        if(input == "get"){
            cin >> key;
            if(db.count(key) == 1){
                cout << db[key] << endl;
            } else{
                cout <<"KE: no key "<<key<<" found in the document" << endl;
            }
        }
    }
} 