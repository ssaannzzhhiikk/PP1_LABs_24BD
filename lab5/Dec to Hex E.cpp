#include <bits/stdc++.h>
using namespace std;

int main() {
    int dec, index = 0;
    cin >> dec;
    
    string hexx; // Increase the size to handle larger decimal numbers

    // Handle edge case when input is 0
    if (dec == 0) {
        cout << "0" << endl;
        return 0;
    }

    // Loop to convert decimal to hexadecimal
    while(dec > 0) {
        int remainder = dec % 16;
        if(remainder < 10) {
            hexx += remainder + '0';
        } else {
            hexx += remainder - 10 + 'A';
        }
        index++;
        dec /= 16;
    }

    // Print the hexadecimal result in reverse order


    for (int i = index - 1; i >= 0; i--) {
        cout << hexx[i];
    }
    cout << endl;
}