
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = nullptr;
    }
};

class Queue {
public:
    Node* start;
    Node* end;
    int count;

    Queue() {
        start = nullptr;
        end = nullptr;
        count = 0;
    }

    ~Queue() {
        while (start != nullptr) {
            Node* temp = start;
            start = start->next;
            delete temp;
        }
    }

    void push(int x) {
        Node* temp = new Node(x);

        if (start == nullptr) {
            start = end = temp;
        } else {
            end->next = temp;
            end = temp;
        }

        count++;
    }

    void pop() {
        if (start == nullptr) {
            cout << "Empty queue" << endl;
            return;
        }

        Node* temp = start;
        start = start->next;

        delete temp;
        count--;

        if (start == nullptr) {
            end = nullptr;
        }
    }

    int front() {
        if (start == nullptr) {
            cout << "Empty queue" << endl;
            return -1;
        }
        return start->val;
    }

    int rear() {
        if (end == nullptr) {
            cout << "Empty queue" << endl;
            return -1;
        }
        return end->val;
    }

    int size() {
        return count;
    }

    void traverse() {
        if (start == nullptr) {
            cout << "Empty queue" << endl;
            return;
        }

        Node* temp = start;

        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Queue q;

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++) {
        q.push(arr[i]);
    }

    q.pop();
    q.traverse();

    cout << "front : " << q.front() << endl;
    cout << "rear : " << q.rear() << endl;

    q.pop();
    cout << "size : " << q.size() << endl;

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
