#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const vector<char>& vec) {
    int left = 0;
    int right = vec.size() - 1;

    while (left < right) {
        if (vec[left] != vec[right]) {
            return false; // If any pair of elements are not equal, it's not a palindrome
        }
        left++;
        right--;
    }
    return true; // If all pairs match, it's a palindrome
}

int main()
{
    string n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n.size(); i++){
        arr.push_back(n[i]);
    }

    sort(arr.begin(), arr.end());

    bool t = true;
    do{
        vector<char> temp;
        for(int i = 0;i < arr.size();i++){
            temp.push_back(arr[i]);
        }
        if(isPalindrome(temp)){
            cout << "ZA WARUDO TOKI WO TOMARE";
            t = false;
            break;
        }

    }while(next_permutation(arr.begin() , arr.end()));


    if(t){
        cout << "JOJO";
    }

}