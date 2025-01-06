#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if(x >= 0 && x <= 7 && y >= 0 && y <= 7 ){
        for(int i = 0; i <= 7; i++){
            for(int j = 0; j <= 7; j++){
                if(x == i && y == j){
                    cout << "1 ";
                } else if( (j == y) ||(i == x) || (x+y == i+j) || (y-j-1 == x - i - 1)){
                    cout << "2 ";
                } else{
                    cout << "* ";
                }
            }
            cout << endl;
        }
    } else{
        cout << "Impossible";
    }
}