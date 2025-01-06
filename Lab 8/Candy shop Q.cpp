#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> box;
    vector<int> sold;
    for(int i = 0; i < n; i++){
        int zapros;
        cin >> zapros;
        if(zapros == 0){
            sold.push_back(box.top());
            box.pop();
        } else if( zapros > 0){
            box.push(zapros);
        }
    }

    if(sold.empty()){
        cout << "-1";
    } else{
        for(int i : sold){
            cout << i <<  " ";
        }
    }
}