
#include <iostream>
using namespace std;

class PriorityQueue {
    static const int CAPACITY = 100;
    int pq[CAPACITY];
    int n;

public:
    PriorityQueue() {
        n = 0;
    }

    void insert(int x) {
        if (n == CAPACITY) {
            cout << "Priority Queue Overflow" << endl;
            return;
        }

        pq[n] = x;
        n++;
    }

    void deleteElement() {
        if (n == 0) {
            cout << "Queue is Empty" << endl;
            return;
        }

        int pos = 0;

        for (int i = 1; i < n; i++) {
            if (pq[i] > pq[pos]) {
                pos = i;
            }
        }

        cout << "Deleted: " << pq[pos] << endl;

        for (int i = pos; i < n - 1; i++) {
            pq[i] = pq[i + 1];
        }

        n--;
    }

    void display() {
        if (n == 0) {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue: ";

        for (int i = 0; i < n; i++) {
            cout << pq[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    PriorityQueue q;

    q.insert(10);
    q.insert(30);
    q.insert(20);
    q.insert(50);

    q.display();

    q.deleteElement();
    q.display();

    q.deleteElement();
    q.display();

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
