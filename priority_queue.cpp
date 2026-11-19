
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);

    cout << "Max-Heap (Descending): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);

    cout << "Min-Heap (Ascending): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
