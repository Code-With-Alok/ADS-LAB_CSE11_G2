
#include <bits/stdc++.h>
using namespace std;

int sumDigits(long long n) {
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    long long n = num;

    if (n < 0)
        n = -n;

    cout << "Sum of digits = " << sumDigits(n) << endl;

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
