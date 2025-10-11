#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> A, B, C;
    int ch, num;
    string counter;

    do {
        cout << "\n1=addQ  2=serv  3=showQ  0=end: ";
        cin >> ch;

        if (ch == 1) {
            cin >> num;
            if (A.size() <= B.size() && A.size() <= C.size()) { A.push(num); cout << "customer " << num << " -> A\n"; }
            else if (B.size() <= A.size() && B.size() <= C.size()) { B.push(num); cout << "customer " << num << " -> B\n"; }
            else { C.push(num); cout << "customer " << num << " -> C\n"; }
        } 
        else if (ch == 2) {
            cin >> counter;
            queue<int>* q;  // สร้างตัวชี้ไปยังคิว (pointer)

            if (counter == "A")
            q = &A;
            else if (counter == "B")
            q = &B;
            else
            q = &C;

            if (!q->empty()) { cout << "service " << q->front() << " at " << counter << endl; q->pop(); }
            else cout << counter << " Free\n";
        } 
        else if (ch == 3) {
            auto show = [](queue<int> q){ while(!q.empty()){ cout << q.front() << " "; q.pop(); } cout << endl; };
            cout << "A: "; show(A); cout << "B: "; show(B); cout << "C: "; show(C);
        }

    } while (ch != 0);
}
