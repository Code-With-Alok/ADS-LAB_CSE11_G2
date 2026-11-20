
#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C) {
    if (n == 1) {
        cout << "Move disk 1 from " << A << " to " << C << endl;
        return;
    }

    hanoi(n - 1, A, C, B);

    cout << "Move disk " << n << " from " << A << " to " << C << endl;

    hanoi(n - 1, B, A, C);
}

int main() {
    int n;

    cout << "Enter the number of disks: ";

    if (!(cin >> n) || n <= 0) {
        cout << "Number of disks must be positive." << endl;
    }
    else {
        hanoi(n, 'A', 'B', 'C');
    }

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
