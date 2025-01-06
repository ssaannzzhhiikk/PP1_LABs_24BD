#include <bits/stdc++.h>
using namespace std;

double gp(int num, int final){
    if(num >= 30 && final >= 20){
        int nums = num + final;
        double gg = 1.0 + ((nums - 50) / 5)*(1.0/3.0) ;
        return gg;
    } else{
        return 0.0;
    }
}

int main()
{
    int sub;
    cin >> sub;
    double sam = 0;
    double credits = 0;
    for(int i = 0; i < sub; i++){
        int at1, at2, fi, cr;
        cin >> at1 >> at2 >> fi >> cr;
        int att12 = at1 + at2;
        credits += cr;
        sam += gp(att12, fi) * cr;
    }

    cout << sam / credits;
}