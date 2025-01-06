#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<string> pass;
    int counter = 0;
    for(int i = 0;i < n;i++){
        bool up = false, low = false, num = false;
        string s;
        cin >> s;
        int len = s.size();

        for(int j = 0; j < len; j++){
            if(isdigit(s[j])){
                num = true;
            }
            if(isupper(s[j])){
                up = true;
            }
            if(islower(s[j])){
                low = true;
            }
        }

        if(num && up && low){
            pass.insert(s);
        }
    }


    cout << pass.size() << endl;
    for(string s : pass){
        cout << s << endl;
    }
}