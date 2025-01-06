#include <iostream>
using namespace std;

int almat(int n){
    if (n == 0) {
        return 0;
    }
    return ( (n % 10) / 2) + almat(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << almat(n);
}