#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> q;
    bool isReversed = false; 

    for (int i = 0; i < n; i++) {
        int que;
        cin >> que;

        if (que == 1) {
            int x;
            cin >> x;

            if (isReversed) {
                q.push_front(x); 
            } else {
                q.push_back(x);
            }
        } 
        else if (que == 2) {
            isReversed = !isReversed;
        }
    }

    if (isReversed) {
        while (!q.empty()) {
            cout << q.back() << " ";
            q.pop_back();
        }
    } else {
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop_front();
        }
    }
    cout << endl;

    return 0;
}
