
#include <bits/stdc++.h>
using namespace std;

int n = 5;
int stackArr[5];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == n - 1;
}

void push(int item) {
    if (isFull()) {
        cout << "Stack Overflow" << endl;
    } else {
        stackArr[++top] = item;
        cout << item << " pushed into stack" << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "Popped element: " << stackArr[top] << endl;
        top--;
    }
}

void traverse() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << " ";
        }

        cout << endl;
        cout << "Top element: " << stackArr[top] << endl;
    }
}

int main() {
    int choice, item;
    bool running = true;

    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Traverse" << endl;
    cout << "4. Exit" << endl;

    while (running) {
        cout << "Enter choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input" << endl;
            break;
        }

        switch (choice) {
            case 1:
                cout << "Enter item: ";
                if (!(cin >> item)) {
                    cout << "Invalid input" << endl;
                    running = false;
                } else {
                    push(item);
                }
                break;

            case 2:
                pop();
                break;

            case 3:
                traverse();
                break;

            case 4:
                cout << "Exit" << endl;
                running = false;
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    }

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
