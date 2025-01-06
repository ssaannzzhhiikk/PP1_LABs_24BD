#include <bits/stdc++.h>
using namespace std;
int main()
{
    int days;
    cin >> days;
    map<string, int> data;
    double sum = 0;
    for(int i = 0; i < days; i++){
        int day;
        cin >> day;
        for(int j = 0; j < day; j++){
            string city;
            int ppl;
            cin >> city >> ppl;
            data[city] += ppl;
            sum += ppl;
        }
    }

    for(const auto x : data){
        double per = x.second*100 / sum; 
        cout << x.first << " " << per << endl;
    }
}