#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    float score;
};

int main() {
    Student s[5];
    for (int i = 0; i < 5; i++) {
        cout << "ชื่อนักเรียนคนที่ " << i+1 << ": ";
        cin >> s[i].name;
        cout << "คะแนน: ";
        cin >> s[i].score;
    }

    string search;
    cout << "\nค้นหาชื่อนักเรียน: ";
    cin >> search;

    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (s[i].name == search) {
            cout << "คะแนนของ " << s[i].name << " คือ " << s[i].score << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "ไม่พบนักเรียนในระบบ\n";

    return 0;
}

