#include <bits/stdc++.h>
using namespace std;

void hypo(int a, int b){
    double c = sqrt(a*a + b*b);
    if(c * 10 != 0){
        cout << setprecision(4) << c;
    } else{
        cout << c;
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    hypo(a, b);
}