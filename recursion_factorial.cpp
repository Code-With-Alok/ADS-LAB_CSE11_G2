
#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Please enter a number between 0 and 20." << endl;
    }
    else {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
