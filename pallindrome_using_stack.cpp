
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    stack<char> st;

    for (char c : s) {
        st.push(c);
    }

    string rev = "";

    while (!st.empty()) {
        rev += st.top();
        st.pop();
    }

    return s == rev;
}

int main() {
    string str;

    cout << "Enter a number or string: ";
    cin >> str;

    if (isPalindrome(str)) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not Palindrome" << endl;
    }

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
