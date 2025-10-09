#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkParentheses(const string &expr) {
    stack<char> s;

    for(char c : expr) {
        if(c == '(') {
            s.push(c);  // เจอเปิด -> push
        } else if(c == ')') {
            if(s.empty()) return false; // เจอปิดแต่ไม่มีเปิด
            s.pop(); // เจอปิด -> เอาเปิดออก
        }
    }

    return s.empty(); // ถ้าว่าง แปลว่า match ครบ
}

int main() {
    string expr;
    cout << "กรอกสมการ: ";
    getline(cin, expr);

    if(checkParentheses(expr))
        cout << "วงเล็บถูกต้อง\n";
    else
        cout << "วงเล็บไม่ถูกต้อง\n";

    return 0;
}
