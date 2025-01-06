#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }

    int cntr = 0;

    do{

        int cnt = 0;

        for(int i = 0;i < v.size();i++){
            if(v[i] == i+1){
                cnt += 1;
            }
        }


        if(cnt == k){
            cntr++;
        }

    }while(next_permutation(v.begin() , v.end()));

    cout << cntr;

}