
#include <bits/stdc++.h>
using namespace std;

long long reverseNum(long long n, long long rev = 0) {
    if (n == 0)
        return rev;

    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    long long n = num;
    bool negative = n < 0;

    if (negative)
        n = -n;

    long long reversed = reverseNum(n);

    if (negative)
        reversed = -reversed;

    cout << "Reversed number = " << reversed << endl;

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
