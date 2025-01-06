#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
        map<pair <pair<string, string>, pair<int, int>>,  int> tms;

    for(int i = 0; i < n; i++){
        string n1, n2;
        int sc1, sc2;
        cin >> n1 >> sc1 >> n2 >> sc2;
        tms.insert({{{n1, n2}, {sc1, sc2}} ,  sc1 + sc2});
    }


    for(const auto x:tms){
        cout << x.first.first.first <<  " and " << x.first.first.second << " "<< x.second << endl; 
    }
    
}