#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l , r;
    cin >> l >> r;
    string num1;
    bool ap = true;


    for(int i = l; i <=r; i++){

        set<char> num;
        string i1 = to_string(i);
        int len = i1.size();

        for(int j = 0; j < len; j++){
            num.insert(i1[j]);
        }
        
        if(num.size() == len){
                num1 = i1;
                ap = false;
                break;
            }
    }

    if(ap){
        cout << "Understandable, have a great day";
    } else{
        cout << num1;
    }
}