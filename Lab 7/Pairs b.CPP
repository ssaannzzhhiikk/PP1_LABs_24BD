#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(10001);
    int size = 0;
    for(int i = 0; i < 10000; i++){
        int input;
        cin >> input;
        if(input == 0){
            break;
        } else{
            vec[i] = input;
            size++;
        }
    }
    int l = 0, r = size-1;
    while(l <= r){
        if(l == r){
            cout << vec[l];
        }else{
            cout << vec[l]+vec[r] << " ";
        }
        l++;
        r--;
    }
}