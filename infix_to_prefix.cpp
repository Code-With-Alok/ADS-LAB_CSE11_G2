
#include <bits/stdc++.h>
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

// Function to convert Infix to Prefix
string infixToPrefix(string s) {
    reverse(s.begin(), s.end());

    stack<char> st;
    string ans = "";

    // Swap opening and closing brackets
    for (char &ch : s) {
        if (ch == '(')
            ch = ')';
        else if (ch == ')')
            ch = '(';
    }

    for (char ch : s) {
        if (isalnum(static_cast<unsigned char>(ch))) {
            ans += ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }

            if (st.empty())
                return "";

            st.pop();
        }
        else if (ch == '+' || ch == '-' ||
                 ch == '*' || ch == '/' || ch == '^') {

            while (!st.empty() && st.top() != '(' &&
                  (precedence(st.top()) > precedence(ch) ||
                  (precedence(st.top()) == precedence(ch) &&
                   ch == '^'))) {

                ans += st.top();
                st.pop();
            }

            st.push(ch);
        }
        else {
            return "";
        }
    }

    while (!st.empty()) {
        if (st.top() == '(')
            return "";

        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string s;

    cout << "Enter infix expression: ";
    cin >> s;

    string result = infixToPrefix(s);

    if (result.empty()) {
        cout << "Invalid infix expression" << endl;
    }
    else {
        cout << "Prefix expression is: " << result << endl;
    }

    cout << "This program is written by Alok Sharan 2500320100153 CSE11" << endl;

    return 0;
}
