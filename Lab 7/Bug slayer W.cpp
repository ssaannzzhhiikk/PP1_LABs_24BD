#include <bits/stdc++.h>
using namespace std;

int main() {
    int bug_amount;
    cin >> bug_amount;
    map<string, int> bugs;

    for (int i = 0; i < bug_amount; i++) {
        string name, weakness;
        cin >> name >> weakness;
        bugs[weakness]++;
    }

    int hunters_amount;
    cin >> hunters_amount;
    map<string, int> ability_numofbugs;

    for (int i = 0; i < hunters_amount; i++) {
        string name, ability;
        int num;
        cin >> name >> ability >> num;
        ability_numofbugs[ability] += num;
    }

    for(const auto& x : ability_numofbugs){
        string s = x.first;
        int amo = x.second;
        if(bugs.count(s) > 0 && bugs[s] > 0){
            bugs[s] -= min(bugs[s], amo); 
        }
        
    }


    int num_bugs_left = 0;
    for (const auto& bug : bugs) {
        num_bugs_left += bug.second;
    }

    cout << "Bugs left: " << num_bugs_left << endl;
}