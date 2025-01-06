#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n % 2 != 0){
        int shift = n-1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j < shift){
                    cout <<".";
                } else{
                    cout << "#";
                }
            }
            shift--;
            cout << endl;
        }
    } else if(n % 2 == 0){
        int shift = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j > shift){
                    cout <<".";
                } else{
                    cout << "#";
                }
            }
            shift++;
            cout << endl;
        }
    }

}