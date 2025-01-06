#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string , int> scores;
    int n, ball , k = 0;
    double sum = 0;
    string name;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> name >> ball;
        scores[name] += ball;
        sum += ball;
    }

    multimap<int , string> result;
    for(auto a: scores){
        result.insert(pair<int , string>(a.second , a.first));
    }
    

    double array_ball[result.size()];
    string array_names[result.size()];
    for(auto a : result){
        array_ball[k] = (a.first / sum) * 100;
        array_names[k] = a.second;
        k++;
    }
    
    for(int i = 0;i < k;i++){
        cout << array_names[k - 1 - i] << " " << array_ball[k - 1 -i] << "%" << endl;
    }return 0;
}
