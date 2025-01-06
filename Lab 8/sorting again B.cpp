#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> evens;
    vector<int> odds;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp % 2 == 0){
            evens.push_back(temp);
        } else{
            odds.push_back(temp);
        }
    }
    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());

    for(int i = evens.size()-1; i >= 0; i--){
        cout << evens[i] << " ";
    }
    for(int x:odds){
        cout << x << " ";
    }
}