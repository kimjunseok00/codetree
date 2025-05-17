#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValidParentheses(const string& str) {
    stack<char> s;
    
    for (char ch : str) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) {
                return false;
            }
            s.pop();
        }
    }

    return s.empty(); //
}

int main() {
    string input;
    cin >> input;

    if (isValidParentheses(input)) {
        cout << "Yes\n" <<;
    } else {
        cout << "No" << endl;
    }

    return 0;
}