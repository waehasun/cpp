#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// โครงสร้างเก็บข้อมูลนักเรียน
struct Student {
    string name;
    int score;
};

// ฟังก์ชันเปรียบเทียบ ใช้ใน sort()
bool compareStudent(const Student &a, const Student &b) {
    if (a.score == b.score)
        return a.name < b.name;  // คะแนนเท่ากัน → เรียงชื่อ A-Z
    return a.score > b.score;     // คะแนนมาก → มาก่อน
}

int main() {
    int n;
    cout << "กรอกจำนวนนักเรียน: ";
    cin >> n;

    vector<Student> students(n);

    cout << "กรอกชื่อและคะแนนของนักเรียนแต่ละคน:\n";
    for (int i = 0; i < n; i++) {
        cout << "นักเรียนคนที่ " << i + 1 << " ชื่อ: ";
        cin >> students[i].name;
        cout << "คะแนน: ";
        cin >> students[i].score;
    }

    // ใช้ sort() ของ STL (Quick Sort ภายใน)
    sort(students.begin(), students.end(), compareStudent);

    cout << "\nลำดับนักเรียนหลังเรียง (คะแนนมาก→น้อย, ชื่อ A→Z ถ้าคะแนนเท่ากัน):\n";
    for (auto s : students)
        cout << s.name << " - " << s.score << endl;

    return 0;
}
