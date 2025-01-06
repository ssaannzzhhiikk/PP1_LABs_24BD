#include <bits/stdc++.h>
using namespace std;
int main()
{
    string dish;
    cin >> dish;
    int cnt = 0;
    
    for (int i = 0; i < dish.size(); i++) {
        char c = dish[i];
        int temp = int(c);
        if(temp >= 65 && temp <= 90 || temp >= 97 && temp <= 122){
            cnt+=temp;
        }
    }

    if(cnt > 300){
        cout << "It is tasty!";
    } else{
        cout << "Oh, no!";
    }

}
