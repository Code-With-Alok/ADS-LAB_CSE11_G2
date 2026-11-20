
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    Node* topNode;
    int count;

public:
    Stack() {
        topNode = nullptr;
        count = 0;
    }

    ~Stack() {
        while (topNode != nullptr) {
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
        }
    }

    void push(int value) {
        Node* newNode = new Node{value, topNode};
        topNode = newNode;
        count++;
    }

    void pop() {
        if (topNode == nullptr) {
            cout << "Stack Underflow" << endl;
            return;
        }

        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        count--;
    }

    void peek() {
        if (topNode == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << "Top element: " << topNode->data << endl;
    }

    void display() {
        if (topNode == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = topNode;

        cout << "Stack elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }

    int size() {
        return count;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.peek();

    s.pop();
    s.display();

    cout << "Stack size: " << s.size() << endl;

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
