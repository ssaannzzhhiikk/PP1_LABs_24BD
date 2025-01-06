#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<string> names;
    vector<int> grades;

    for(int i = 0; i < n; i++){
        string s;
        int num;

        cin >> s >> num;
        names.push_back(s);
        grades.push_back(num);
    }

    sort(names.begin(), names.end());
    sort(grades.begin(), grades.end());

    for(int i = 0; i < n; i++){
        cout << names[i] << " " << grades[i] << endl;
    }


}