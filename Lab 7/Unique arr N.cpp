#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    set<int> s;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        vec[i] = num;
        s.insert(num);
    }
    if(vec.size() == s.size()){
        cout << "YES";
    } else{
        cout << "NO";
    }


}