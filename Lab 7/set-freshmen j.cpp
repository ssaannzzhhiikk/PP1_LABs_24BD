#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> nums;
    int num;
    while(cin >> num){
        nums.insert(num);
    }
    cout << nums.size();
}