#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, string> pases;
    for(int i = 0; i < n; i++){
        string name, pass;
        cin >> name >> pass;
        pases[name] = pass;
    }

    int zapros;
    cin >> zapros;
    for(int i = 0; i < zapros; i++){
        string name, pass;
        cin >> name >> pass;
        if(pases.find(name) != pases.end()){
            if(pases[name] == pass){
                cout << "correct password" << endl;
            }
            if(pases[name] != pass){
                cout << "password error" << endl;
            }
        }
        else{
            cout << "login error" << endl;
        }
    }
}