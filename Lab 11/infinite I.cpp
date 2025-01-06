#include <iostream>
using namespace std;

// Recursive function to calculate the sum
int sumNumbers() {
    int num;
    cin >> num; // Read a number

    if (num == 0) {
        return 0; // Base case: return 0 when input is 0
    }

    return num + sumNumbers(); // Add the number to the result of the recursive call
}

int main() {
    cout << sumNumbers() << endl; // Print the result of the recursive function
    return 0;
}
