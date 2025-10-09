#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums;
    int n;

    cout << "กรอกตัวเลข (ใส่ -1 เพื่อหยุด): ";
    while (true) {
        cin >> n;
        if (n == -1) break;
        nums.push_back(n);
    }

    cout << "\nลิสต์ก่อนประมวลผล: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    // เรียงข้อมูล
    nums.sort();

    // ลบค่าที่ซ้ำกัน
    nums.unique();

    // กลับลำดับ
    nums.reverse();

    cout << "\nลิสต์หลังเรียง-ลบซ้ำ-กลับลำดับ:\n";
    for (int x : nums) cout << x << " ";

    cout << "\nจำนวนสมาชิกในลิสต์: " << nums.size() << endl;

    return 0;
}
