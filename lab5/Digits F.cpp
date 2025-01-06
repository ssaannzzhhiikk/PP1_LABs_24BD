#include <bits/stdc++.h>
using namespace std;
int main()
{
    string dig;
    cin >> dig;
    int len = dig.size();
    int size = 0;
    for(int i = 0; i < len; i++){
        int innersize = 0;
        for(int j = 0; j < len; j++){
            if(dig[i] == dig[j]){
                innersize++;
            }
        }
        if(innersize >= size){
            size = innersize;
        }
    }

    bool aprover = true;
    for(int i = 0; i < len; i++){
        int innersiz = 0;
        for(int j = 0; j < len; j++){
            if(dig[i] == dig[j]){
                innersiz++;
            }
        }
        if(innersiz != size){
            aprover = false;
            break;
        } 
    }
    if(aprover){
        cout << "YES";
    } else{
        cout <<"NO";
    }
            

}
