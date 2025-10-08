#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, word;
    cout << "ข้อความ: ";
    getline(cin, text);
    cout << "คำที่ต้องการนับ: ";
    getline(cin, word);

    int count = 0;
    size_t pos = text.find(word);

    while (pos != string::npos) {
        count++;
        pos = text.find(word, pos + 1); // ค้นหาต่อจากตำแหน่งก่อนหน้า
    }

    cout << "พบคำ \"" << word << "\" จำนวน " << count << " ครั้ง" << endl;
}
