#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, vector<int>>> vec;

    for(int i = 0; i < n; i++){
        vector<int> temp;
        int size, summ = 0;
        cin >> size;
        temp.push_back(size);

        for(int j = 0; j < size; j++){
            int element;
            cin >> element;
            temp.push_back(element);
            summ+= element;
        }
        vec.push_back({summ, temp});
    }
    //sum,  {size, elements}

    sort(vec.begin(), vec.end(), [](const pair<int, vector<int>>& a, const pair<int, vector<int>>& b) {
        // Sort primarily by key
        if (a.first != b.first)
            return a.first < b.first;
        // If keys are equal, sort by the inner vector lexicographically
        return a.second < b.second;
    });

    for(auto s : vec){
        int of = s.second.size();
        for (int i = 1; i < of; i++) {
            cout << s.second[i] << " ";
        }
        cout << endl;
    }
}
//sum size elements