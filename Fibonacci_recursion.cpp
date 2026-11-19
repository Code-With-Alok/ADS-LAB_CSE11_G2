// program for finding nth fibonacci number using recursion and improving its run time to save stack operations
#include <bits/stdc++.h>
using namespace std;

map<int,long long> dp;

long long fib(int n) {
    if (n <= 1) return n;
    if (dp.count(n)) return dp[n];
    return dp[n] = fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0 || n > 92) {
        cout << "Please enter a number between 0 and 92." << endl;
    } else {
        cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    }

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;
    return 0;
}
