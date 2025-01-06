#include <bits/stdc++.h>
using namespace std;
bool isPrime(int nums) {
    int num = abs(nums);
    if (num == 0 || num == 1) return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) { // Check divisors up to the square root of the number
        if (num % i == 0) {
            return false; // If divisible by any number other than 1 and itself, not prime
        }
    }
    return true; // Otherwise, the number is prime
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        int nn;
        cin >> nn;
        nums.push_back(nn);
    }
    int cnt = count_if(nums.begin(), nums.end(), isPrime);
    cout << cnt;
}