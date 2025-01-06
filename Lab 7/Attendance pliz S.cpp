#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multimap<string, int> att;
    for(int i = 0; i < n; i++){
        string s;
        int num;
        cin >> s >> num;
        att.insert({s, num});
    }
    map<string, int> at2;
    for(auto at : att){
        set<int> nums;
        for (auto it = att.find(at.first); it != att.end() && it->first == at.first; ++it) {
            nums.insert(it->second);
        }
        at2.insert({at.first, nums.size()});
    }


    for(auto x:at2){
        if(x.second >=3){
            cout << x.first << " " << "+1" << endl;
        } else{
            cout << x.first << " " << "NO BONUS" << endl;
        }
    }
}