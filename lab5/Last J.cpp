#include <bits/stdc++.h>
using namespace std;
int main()
{
    string dish;
    cin >> dish;
    int cnt = 0;
    int mx = 0;
    for (int i = 0; i < dish.size(); i++) {
        char c = dish[i];
        int temp = int(c);
        if(temp > mx){
            mx = temp;
        }
    }

    cout << char(mx);

}
