#include <bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    getline(cin, line);


    stringstream ss(line);
    string word;

    while (ss >> word){
        bool has_digit = false;
        for (char c : word){
            if (isdigit(c)){
                has_digit = true;
                break;
            }
        }
        if ( !has_digit ){
            cout << word << endl;    
        }

    }

    

}