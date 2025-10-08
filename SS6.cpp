#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> fruits(5);
    cout << "กรอกชื่อผลไม้ 5 ชื่อ:\n";
    for (int i = 0; i < 5; i++) cin >> fruits[i];

    sort(fruits.begin(), fruits.end()); // เรียง A → Z

    cout << "\nผลลัพธ์หลังเรียง: ";
    for (auto f : fruits) cout << f << " ";
}
