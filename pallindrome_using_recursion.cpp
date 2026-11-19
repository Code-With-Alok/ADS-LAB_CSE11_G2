
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s, int start, int end) {
    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0, static_cast<int>(str.length()) - 1))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
