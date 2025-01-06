#include <iostream>
using namespace std;

int mx(string n, int s = 0){
    if( s == n.size()){
        return 0;
    }

    return max( (n[s]- '0'), mx(n, s+1) );
}

int main()
{
    string n;
    cin >> n;
    cout << mx(n);
}