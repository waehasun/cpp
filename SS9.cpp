#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string expr;
    cout << "กรอกสมการ: ";
    getline(cin, expr);

    stack<char> s;
    bool isValid = true;

    for (char c : expr) {
        if (c == '(') {
            s.push(c);  // เจอเปิด -> push เข้า stack
        } else if (c == ')') {
            if (s.empty()) { // เจอปิดแต่ไม่มีเปิด
                isValid = false;
                break;
            }
            s.pop(); // เจอปิด -> เอาเปิดออก
        }
    }

    if (!s.empty()) isValid = false; // เหลือวงเล็บเปิดค้างไว้

    if (isValid)
        cout << "correct" << endl;
    else
        cout << "incorrect" << endl;

    return 0;
}
