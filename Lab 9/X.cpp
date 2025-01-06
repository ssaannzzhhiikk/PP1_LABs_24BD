#include <bits/stdc++.h>
using namespace std;


int main()
{
    string n;
    cin >> n;
    vector<char> arr;
    for(int i = 0; i < n.size(); i++){
        arr.push_back(n[i]);
    }

    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());

    do{
        for(int i = 0;i < arr.size();i++){
            cout << arr[i];
        }
        

    }while(prev_permutation(arr.begin() , arr.end()));




}