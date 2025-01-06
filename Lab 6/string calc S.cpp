#include <bits/stdc++.h>
using namespace std;

string strtoint(const string &s) {
    string ints;
    for (int i = 0; i < s.size(); i += 3) {
        string sub = s.substr(i, 3);
        if (sub == "ONE") {
            ints += "1";
        } else if (sub == "TWO") {
            ints += "2";
        } else if (sub == "THR") {
            ints += "3";
        } else if (sub == "FOU") {
            ints += "4";
        } else if (sub == "FIV") {
            ints += "5";
        } else if (sub == "SIX") {
            ints += "6";
        } else if (sub == "SEV") {
            ints += "7";
        } else if (sub == "EIG") {
            ints += "8";
        } else if (sub == "NIN") {
            ints += "9";
        } else if (sub == "ZER") {
            ints += "0";
        }
    }
    return ints;
}

string inttostr(const string &number) {
    string result;
    for (char sub : number) {
        if (sub == '1') {
            result += "ONE";
        } else if (sub == '2') {
            result += "TWO";
        } else if (sub == '3') {
            result += "THR";
        } else if (sub == '4') {
            result += "FOU";
        } else if (sub == '5') {
            result += "FIV";
        } else if (sub == '6') {
            result += "SIX";
        } else if (sub == '7') {
            result += "SEV";
        } else if (sub == '8') {
            result += "EIG";
        } else if (sub == '9') {
            result += "NIN";
        } else if (sub == '0') {
            result += "ZER";
        }
    }
    return result;
}

int main() {
    string sol;
    cin >> sol;

    // Находим оператор и его позицию
    int indexofprop = -1;
    char operation = '\0';

    for (int i = 0; i < sol.size(); i++) {
        if (sol[i] == '+' || sol[i] == '-' || sol[i] == '*') {
            indexofprop = i;
            operation = sol[i];
            break;
        }
    }



    //split to 2 num
    string firstPart = sol.substr(0, indexofprop);
    string secondPart = sol.substr(indexofprop + 1);

    // sttring to integer
    int integer1 = stoi(strtoint(firstPart));
    int integer2 = stoi(strtoint(secondPart));

    //do the operation
    int newint;
    if (operation == '+') {
        newint = integer1 + integer2;
    } else if (operation == '-') {
        newint = integer1 - integer2;
    } else if (operation == '*') {
        newint = integer1 * integer2;
    }

    //int to str 
    string resultStr = inttostr(to_string(newint));
    cout << resultStr << endl;

    return 0;
}
