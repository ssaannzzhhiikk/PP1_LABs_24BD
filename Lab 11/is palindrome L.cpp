#include <iostream>
#include <string>
using namespace std;

// Recursive function to check if a string is palindrome
bool isPalindrome(const string& str, int start, int end) {
    // Base case: if the string has one or zero characters, it's a palindrome
    if (start >= end) {
        return true;
    }

    // If characters at the start and end are different, it's not a palindrome
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive call to check the next substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string input;
    cin >> input;

    // Call the recursive function and check if the string is a palindrome
    if (isPalindrome(input, 0, input.length() - 1)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
