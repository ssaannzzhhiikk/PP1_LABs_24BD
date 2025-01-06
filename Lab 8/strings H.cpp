#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> ryad;
    int n;
    cin >> n;
    for(int i = 0; i < n;i++){
        string word;
        cin >> word;
        ryad.insert({word, i+1});
    }

    for(const auto& x:ryad){
        cout << x.first << " " << x.second << endl;
    }


}