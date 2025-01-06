#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    deque<string> names;
    
    for(int i = 0; i < n; i++) {
        int com;
        cin >> com;

        if(com == 1) {
            string name;
            cin >> name;
            names.push_back(name);
            cout << names.front() << endl;  // Print the first boy in the queue
        }

        if(com == 2) {
            if (!names.empty()) {  // Ensure there's someone in the queue before popping
                names.pop_front();
            }
            if(names.empty()) {
                cout << "queue is empty" << endl;  // If queue is empty after pop
            } else {
                cout << names.front() << endl;  // Otherwise print the new first boy in the queue
            }
        }
    }
}
