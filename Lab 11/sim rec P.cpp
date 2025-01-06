#include <iostream>
using namespace std;

void printNumbers(int current, int N) {
    if (current > N) {
        return;
    }
    
    cout << current << " ";
    
    printNumbers(current + 1, N);
}

int main() {
    int N;
    cin >> N;  
    printNumbers(1, N);
    return 0;
}
