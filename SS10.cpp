#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "กรอกสตริง: ";
    getline(cin, str);

    stack<char> s;

    // 1️⃣ ใส่ตัวอักษรทั้งหมดลง stack
    for(char c : str) {
        s.push(c);
    }

    // 2️⃣ เอาออกจาก stack ทีละตัว → จะได้ลำดับกลับ
    string reversed = "";
    while(!s.empty()) {
        reversed += s.top();  // ดึงตัวบนสุด
        s.pop();              // เอาออกจาก stack
    }

    cout << "สตริงกลับลำดับ: " << reversed << endl;

    return 0;
}
