#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string text, prefix;
    cout << "ข้อความ: ";
    getline(cin, text);
    cout << "คำที่ต้องการค้นหา (prefix): ";
    getline(cin, prefix);

    stringstream ss(text);
    string word;
    bool found = false;

    cout << "คำที่ขึ้นต้นด้วย \"" << prefix << "\" คือ:\n";
    while (ss >> word) {
        if (word.find(prefix) == 0) { // ถ้า prefix อยู่ต้นคำ
            cout << word << endl;
            found = true;
        }
    }

    if (!found)
        cout << "ไม่พบคำที่ขึ้นต้นด้วย \"" << prefix << "\"\n";
}
