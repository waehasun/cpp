#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "ป้อนจำนวนข้อมูล: ";
    cin >> n;

    int arr[n];
    cout << "ป้อนข้อมูลจำนวน " << n << " ค่า:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int key;
    cout << "\nป้อนค่าที่ต้องการค้นหา: ";
    cin >> key;

    bool found = false;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            index = i;
            break; // เจอแล้วก็หยุดเลย
        }
    }

    if (found)
        cout << "\nพบค่า " << key << " ที่ตำแหน่ง index = " << index << endl;
    else
        cout << "\nไม่พบค่าที่ค้นหาในข้อมูล" << endl;

    return 0;
}

