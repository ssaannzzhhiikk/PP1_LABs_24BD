#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, vector<int>> stud;
    for(int i = 0; i < n;i++){
        string s;
        int grd;
        cin >> s >> grd;
        stud[s].push_back(grd);
    }

    cout << fixed << setprecision(3);
    for(const auto& x:stud){
        const vector<int>& in = x.second;
        string student = x.first;
        double sum = 0;
        for( int sss: in){
            sum+=sss;
        }
        double gpa = sum / in.size();

        cout << student << ": " << gpa << endl; 
    }
}