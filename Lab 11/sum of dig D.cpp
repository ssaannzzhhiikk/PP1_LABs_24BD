#include <bits/stdc++.h>
using namespace std;

int summ(string n){
    int raz = n.size();
    if(raz > 0){

        int san = n[raz-1] - '0';
        n.pop_back();
        return san + summ(n);

    } else{
        return 0;
    }
}

int main()
{
    string n;
    cin >> n;
    cout << summ(n);
}