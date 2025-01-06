#include <bits/stdc++.h>
using namespace std;
int main()
{
    string dish;
    cin >> dish;
    bool apr = true;
    int past = 0;
    for (int i = 1; i < dish.size(); i++) {
        char c = dish[i];
        int first = int(dish[0]);
        int temp = int(c);
        if(first <= temp && temp >= past){
            past = temp;
        } else{
            apr = false;
        }
    }

    if(apr){
        cout << "YES";
    } else{
        cout << "NO";
    }



}
