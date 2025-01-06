#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const vector<int>& vec) {
    int left = 0;
    int right = vec.size() - 1;

    while (left < right) {
        if (vec[left] != vec[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    bool t = true;
    do{
        vector<int> temp;
        for(int i = 0;i < arr.size();i++){
            temp.push_back(arr[i]);
        }
        if(isPalindrome(temp)){
            for(int j = 0; j < n; j++){
                cout << temp[j] << ' ';
            }
            t = false;
            break;
        }

    }while(next_permutation(arr.begin() , arr.end()));


    if(t){
        cout << "Impossible";
    }

}