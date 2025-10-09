#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> line;  // คิวเก็บชื่อนักเรียน
    string command;

    while (true) {
        cout << ">> ";
        cin >> command;

        if (command == "arrive") {
            string name;
            cin >> name;
            line.push(name);
            cout << name << " เข้ามาต่อคิว" << endl;
        }
        else if (command == "serve") {
            if (line.empty()) {
                cout << "ไม่มีนักเรียนในคิว" << endl;
            } else {
                cout << line.front() << " ได้รับอาหารและออกจากคิว" << endl;
                line.pop();
            }
        }
        else if (command == "exit") {
            cout << "โปรแกรมจบการทำงาน" << endl;
            break;
        }
        else {
            cout << "คำสั่งไม่ถูกต้อง!" << endl;
        }
    }

    return 0;
}
