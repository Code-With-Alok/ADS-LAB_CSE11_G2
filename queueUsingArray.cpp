
#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int n;
    int front;
    int rear;

public:
    Queue(int size) {
        n = size;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int x) {
        if (rear == n - 1) {
            cout << "Queue Overflow" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }

        arr[rear] = x;
        cout << "Enqueued: " << x << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << "Removed: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Front: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue: ";

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    int size;

    cout << "Enter queue size: ";

    if (!(cin >> size) || size <= 0) {
        cout << "Invalid queue size" << endl;
    } else {
        Queue q(size);

        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);

        q.dequeue();
        q.peek();
        q.display();
    }

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
