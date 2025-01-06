#include <iostream>
#include <string>
using namespace std;

string normalizeWord(const string &word) {
    string normalized;
    for (char c : word) {
        c = tolower(c);
        if (c == 'b' || c == 'p') {
            normalized += 'p';
        } else if (c == 'i' || c == 'e') {
            normalized += 'e';
        } else {
            normalized += c;
        }
    }
    return normalized;
}

bool areWordsSimilar(const string &word1, const string &word2) {
    return normalizeWord(word1) == normalizeWord(word2);
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; ++i) {
        string word1, word2;
        cin >> word1 >> word2;

        if (areWordsSimilar(word1, word2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
