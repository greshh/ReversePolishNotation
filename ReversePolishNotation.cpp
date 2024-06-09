#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int> S;

int main() {
    string expr, number;
    int op1, op2, result, temp;
    int strlength;
    int i; // index
    getline(cin, expr);
    strlength = expr.length();
    i = 0;
    while (i < strlength) {
        if (expr[i] == ' ') {
            i++;
        } else if (((expr[i] == '-') && (expr[i + 1] >= '0') && (expr[i + 1] <= '9')) || ((expr[i] >= '0') && (expr[i] <= '9'))) {
            number = "";
            number += expr[i];
            i++;
            while ((i < strlength) && (expr[i] != ' ')) {
                if ((expr[i] < '0') || (expr[i] > '9')) {
                    cout << "INVALID\n";
                    exit(10);
                } else {
                    number += expr[i];
                    i++;
                }
            }
            temp = stoi(number);
            S.push(temp);
            i++;
        } else if ((expr[i] == '+') || (expr[i] == '-') || (expr[i] == '*') || (expr[i] == '/')) {
            if ((expr[i+1] != ' ') && ((i+1) != strlength)) {
                cout << "INVALID\n";
                exit(10);
            }
            result = 0;
            if (S.empty() == false) {
                op2 = S.top();
                S.pop();
            } else {
                cout << "INVALID\n";
                exit(10);
            }
            if (S.empty() == false) {
                op1 = S.top();
                S.pop();
            } else {
                cout << "INVALID\n";
                exit(10);
            }
            if (expr[i] == '+') {
                result = op1 + op2;
            } else if (expr[i] == '-') {
                result = op1 - op2;
            } else if (expr[i] == '*') {
                result = op1 * op2;
            } else if (expr[i] == '/') {
                if (op2 == 0) {
                    cout << "INVALID\n";
                    exit(10);
                }
                result = op1 / op2;
            }
            S.push(result);
            i++;
        } else {
            cout << "INVALID\n";
            exit(10);
        }
    }
    if ((i >= strlength) && (S.size() > 1)) {
        cout << "INVALID\n";
        exit(10);
    } else {
        cout << S.top() << endl;
    }
}