#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of strings
    vector<string> A(n);
    
    // Read each string
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Use a map to count character occurrences
    unordered_map<char, int> charCount;
    
    // Initialize the map with characters from the first string
    for (char c : A[0]) {
        charCount[c] = 1;  // Initialize to 1 since it appears in the first string
    }

    // Iterate over the rest of the strings
    for (int i = 1; i < n; i++) {
        set<char> currentChars(A[i].begin(), A[i].end());  // Unique characters in the current string
        for (char c : currentChars) {
            if (charCount.count(c)) {
                charCount[c]++;  // Increment the count if character exists in the map
            }
        }
    }

    // Prepare to collect the common characters
    vector<char> commonChars;
    for (auto& entry : charCount) {
        if (entry.second == n) {  // Check if the character appears in all strings
            commonChars.push_back(entry.first);
        }
    }

    // Sort the common characters
    sort(commonChars.begin(), commonChars.end());

    // If common characters were found, print them
    if (!commonChars.empty()) {
        for (char c : commonChars) {
            cout << c << " ";
        }
    } else {
        cout << "NO COMMON CHARACTERS";
    }

    return 0;
}
