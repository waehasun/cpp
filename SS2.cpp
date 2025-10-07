#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[5];
    for (int i = 0; i < 5; i++) {
        cout << "ชื่อที่ " << i+1 << ": ";
        cin >> name[i];
    }

    string search;
    cout << "\nค้นหาชื่อ: ";
    cin >> search;

    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (name[i] == search) {
            found = true;
            cout << "เจอชื่อ " << search << " ที่ลำดับ " << i+1 << endl;
            break;
        }
    }

    if (!found)
        cout << "ไม่พบชื่อ " << search << endl;

    return 0;
}

