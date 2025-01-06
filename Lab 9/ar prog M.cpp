#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Calculate the total size of the sequence
    int size = (N * (N + 1)) / 2;

    // Create a vector of the required size
    vector<int> sequence(size);

    // Start filling the vector
    int start = 0;
    for (int i = 1; i <= N; i++) {
        fill(sequence.begin() + start, sequence.begin() + start + i, i);
        start += i;
    }

    // Print the sequence
    for (int i = 0; i < size; i++) {
        cout << sequence[i];
        if (i < size - 1) {
            cout << " ";
        }
    }

    return 0;
}
