#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> ing;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        ing.push_back(s);
    }

    multimap<string, string> avaliable_pairs;
    int num;
    cin >> num;
    for(int i = 0; i < num; i++ ){
        string a, b;
        cin >> a >> b;
        avaliable_pairs.insert({a, b});
    }

    set<string> app;
    string avaliable;
    cin >> avaliable;
    for(auto x : avaliable_pairs){
        if(x.first == avaliable){
            app.insert(x.second);
        } 
        if(x.second == avaliable){
            app.insert(x.first);
        }
    }
    cout << app.size() << endl;
    for(auto xx : app){
        cout << xx << " ";
    }


}