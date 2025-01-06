#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n;
    vector<int> array;
    for(int i = 0;i < n;i++){
        cin >> m;
        auto it = find(array.begin() , array.end() , m);
        if(!array.empty() && it != array.end()){
            continue;
        }array.push_back(m);
    }

    sort(array.begin(), array.end());
    do{
        for(int i = 0;i < array.size();i++){
            cout << array[i] << " ";
        }cout << endl;
    }while(next_permutation(array.begin() , array.end()));
    return 0;
}