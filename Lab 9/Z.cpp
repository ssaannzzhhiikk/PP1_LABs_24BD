#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm> // For sort
using namespace std;

int main() {
    int n;
    cin >> n;

    // Vector to store the times as tuples of (hour, minute, second)
    vector<tuple<int, int, int>> times;

    // Reading the input times
    for (int i = 0; i < n; i++) {
        int h, m, s;
        cin >> h >> m >> s;
        times.push_back(make_tuple(h, m, s));
    }

    // Sort the times
    sort(times.begin(), times.end());

    // Print the sorted times
    for (const auto &time : times) {
        cout << get<0>(time) << " " << get<1>(time) << " " << get<2>(time) << endl;
    }

    return 0;
}
