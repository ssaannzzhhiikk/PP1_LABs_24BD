#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n1;
   cin >> n1;
   set<string> subs;
   for(int i = 0; i < n1; i++){
    string s;
    cin >> s;
    subs.insert(s);
   }
   int n2;
   cin >> n2;
   for(int i = 0 ; i < n2; i++){
    string s;
    cin >> s;
    if(subs.count(s)){
        subs.erase(s);
    } else{
        subs.insert(s);
    }
   }

   for(string s:subs){
    cout << s << endl;
   }
}