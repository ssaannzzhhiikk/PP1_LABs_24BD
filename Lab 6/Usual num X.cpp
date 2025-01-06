#include <iostream>
using namespace std;

bool isUsual(int n) {
    if (n <= 0) return false; 
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;

    return n == 1;
}

int main() {
    int n;
    cin >> n;

    if (isUsual(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
