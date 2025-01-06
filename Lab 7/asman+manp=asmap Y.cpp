#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, string> studentToAssistant;
    
    for (int i = 0; i < n; i++) {
        string assistant;
        int num;
        cin >> assistant >> num;

        for (int j = 0; j < num; j++) {
            string student;
            cin >> student;
            studentToAssistant[student] = assistant;
        }
    }

    int zapros;
    cin >> zapros;
    vector<string> arr;

    for (int i = 0; i < zapros; i++) {
        string s;
        cin >> s;

        if (studentToAssistant.find(s) != studentToAssistant.end()) {
            arr.push_back(studentToAssistant[s]); 
        } else {
            arr.push_back("F"); 
        }
    }

   
    for (string sss : arr) {
        cout << sss << endl;
    }

    return 0;
}
