
#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

// Function to determine operator precedence
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Check right associativity
bool isRightAssociative(char op) {
    return op == '^';
}

int main() {
    string Q, P;
    stack<char> s;
    bool valid = true;

    cout << "Enter infix expression: ";
    cin >> Q;

    for (char ch : Q) {
        if (isalnum(static_cast<unsigned char>(ch))) {
            P += ch;
        }
        else if (ch == '(') {
            s.push(ch);
        }
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                P += s.top();
                s.pop();
            }

            if (s.empty()) {
                valid = false;
                break;
            }
            s.pop();
        }
        else if (ch == '+' || ch == '-' ||
                 ch == '*' || ch == '/' || ch == '^') {
            while (!s.empty() && s.top() != '(' &&
                  (precedence(s.top()) > precedence(ch) ||
                  (precedence(s.top()) == precedence(ch) &&
                   !isRightAssociative(ch)))) {
                P += s.top();
                s.pop();
            }
            s.push(ch);
        }
        else {
            valid = false;
            break;
        }
    }

    while (!s.empty()) {
        if (s.top() == '(') {
            valid = false;
        }
        else if (valid) {
            P += s.top();
        }
        s.pop();
    }

    if (valid) {
        cout << "Postfix expression is: " << P << endl;
    }
    else {
        cout << "Invalid infix expression" << endl;
    }

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
