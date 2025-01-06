#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> A(n);
    unordered_set<int> elements; 

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        elements.insert(A[i]);
    }
    
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int xor_result = A[i] ^ A[j]; 
            if (elements.find(xor_result) != elements.end()) {
                count++; 
            }
        }
    }
    
    cout << count << endl;
}
