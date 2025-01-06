#include <iostream>
#include <deque>
using namespace std;
void flush(int n){
    deque<int> dq;
    while(n > 0){
        dq.push_front(n);
        for(int i = 0; i < n; i++){
            dq.push_front(dq.back());
            dq.pop_back();
        }
        n--;
    }

    while(!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
}
/*2 1 4 3*/