#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}

int main()
{
    string text;
    getline(cin, text);

    vector<pair<string, int>> vec;
    map<string, int> word_count;
    stringstream ss(text);
    string word;

    while(ss >> word){
        word_count[word]++;
    }

    for(auto it = word_count.begin(); it != word_count.end(); ++it){
        vec.push_back({it-> first, it->second});
    }

    stable_sort(vec.begin(), vec.end(), comp);

    for (auto itt = vec.begin(); itt != vec.end(); ++itt) {
        cout << itt->first << " : " << itt->second << "\n";
    }
    
}