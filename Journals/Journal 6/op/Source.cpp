#include "stack.h"
using namespace std;

// Function for Exercise 1 - Decimal to Binary Conversion
void dectobin(int num) {
    stack s;
    while (num > 0) {
        s.push(num % 2);
        num /= 2;
    }
    while (!s.isEmpty()) {
        cout << s.peek();
        s.pop();
    }
    cout << endl;
}

// Function for Exercise 1 - Decimal to Octal Conversion
void dectooct(int num) {
    stack s;
    while (num > 0) {
        s.push(num % 8);
        num /= 8;
    }
    while (!s.isEmpty()) {
        cout << s.peek();
        s.pop();
    }
    cout << endl;
}

// Function for Exercise 2 - Reverse a String
void reverseString(const string& str) {
    stack s;
    for (char ch : str) {
        s.push(ch);
    }
    while (!s.isEmpty()) {
        cout << (char)s.peek();
        s.pop();
    }
    cout << endl;
}

// Function for Exercise 3 - Parenthesis Matching
bool checkParentheses(const string& expr) {
    stack s;
    for (char ch : expr) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.isEmpty() || (ch == ')' && s.peek() != '(') ||
                (ch == '}' && s.peek() != '{') ||
                (ch == ']' && s.peek() != '[')) {
                return false;
            }
            s.pop();
        }
    }
    return s.isEmpty();
}

// Function for Exercise 4 - Postfix Evaluation
int evaluatePostfix(const string& expr) {
    stack s;
    for (char ch : expr) {
        if (isdigit(ch)) {
            s.push(ch - '0');
        }
        else {
            int val2 = s.peek(); s.pop();
            int val1 = s.peek(); s.pop();
            switch (ch) {
            case '+': s.push(val1 + val2); break;
            case '-': s.push(val1 - val2); break;
            case '*': s.push(val1 * val2); break;
            case '/': s.push(val1 / val2); break;
            }
        }
    }
    return s.peek();
}

int main() {
    int num;
    cout << "Enter a decimal number for binary and octal conversion: ";
    cin >> num;
    cout << "Binary: "; dectobin(num);
    cout << "Octal: "; dectooct(num);

    string str = "Hello, World!";
    cout << "Original string: " << str << endl;
    cout << "Reversed string: "; reverseString(str);

    string expr = "{[()]}";
    cout << "Expression: " << expr << endl;
    cout << "Parentheses valid: " << (checkParentheses(expr) ? "Yes" : "No") << endl;

    string postfixExpr = "23+5*6+";
    cout << "Postfix expression: " << postfixExpr << endl;
    cout << "Postfix evaluation result: " << evaluatePostfix(postfixExpr) << endl;

    return 0;
}
