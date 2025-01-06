#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursive function to find divisors
void findDivisors(int n, int current, vector<int>& divisors) {
    // Base case: if current exceeds sqrt(n), stop recursion
    if (current * current > n) {
        return;
    }

    // If current divides n, add it to divisors list
    if (n % current == 0) {
        divisors.push_back(current);
        if (current != n / current) {  // To avoid adding the square root twice
            divisors.push_back(n / current);
        }
    }

    // Recursive call for next number
    findDivisors(n, current + 1, divisors);
}

int main() {
    int A, B, K;
    cin >> A >> B >> K;
    
    // Step 1: Calculate GCD of A and B
    int gcd = __gcd(A, B);
    
    // Step 2: Find divisors of the GCD
    vector<int> divisors;
    findDivisors(gcd, 1, divisors);

    // Step 3: Sort divisors in descending order
    sort(divisors.rbegin(), divisors.rend());

    // Step 4: Output the K-th largest divisor
    cout << divisors[K - 1] << endl;

    return 0;
}
