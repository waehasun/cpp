#include <iostream>
#include <string>
using namespace std;

// ประกาศ struct
struct Student {
    string name;
    int age;
    float scores[5];
    float avgScore;
};

int main() {
    int n;
    cout << "กรอกจำนวน นักเรียน: ";
    cin >> n;

    Student* students = new Student[n]; // จอง memory แบบ dynamic

    // รับข้อมูล
    for(int i = 0; i < n; i++) {
        cin.ignore(); // ล้าง buffer
        cout << "ชื่อ นักเรียนคนที่ " << i+1 << ": ";
        getline(cin, students[i].name);

        cout << "อายุ: ";
        cin >> students[i].age;

        float sum = 0;
        for(int j = 0; j < 5; j++) {
            cout << "คะแนนวิชา " << j+1 << ": ";
            cin >> students[i].scores[j];
            sum += students[i].scores[j];
        }
        students[i].avgScore = sum / 5.0; // คำนวณค่าเฉลี่ย
        cout << endl;
    }

    // แสดงผล
    cout << "\n===== รายชื่อนักเรียน =====\n";
    for(int i = 0; i < n; i++) {
        cout << "ชื่อ: " << students[i].name
             << ", อายุ: " << students[i].age
             << ", ค่าเฉลี่ย: " << students[i].avgScore << endl;
    }

    // หาคะแนนเฉลี่ยสูงสุด
    Student* topStudent = &students[0];
    for(int i = 1; i < n; i++) {
        if(students[i].avgScore > topStudent->avgScore) {
            topStudent = &students[i];
        }
    }

    cout << "\nนักเรียนที่มีค่าเฉลี่ยสูงสุด: " 
         << topStudent->name << " (" << topStudent->avgScore << ")\n";

    delete[] students; // คืนหน่วยความจำ
    return 0;
}
