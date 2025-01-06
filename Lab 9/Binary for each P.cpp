#include <bits/stdc++.h>
using namespace std; 

string decimalToBinary(int n) {
    string binaryRepresentation = "";

    while (n > 0) {
        binaryRepresentation += to_string(n % 2);
        n = n / 2;
    }
    reverse(binaryRepresentation.begin(), binaryRepresentation.end());
    return binaryRepresentation;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << decimalToBinary(arr[i]) << endl;
    }
}