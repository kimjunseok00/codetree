#include <iostream>
#include <string>
#include <deque>

using namespace std;

int N;
string cmd[10000];
int num[10000];

int main() {
    deque<int> d;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> num[i];
        }
    }
    for (int i = 0; i < N; i++) {
        if (cmd[i] == "push_front") {
            d.push_front();
        }
        if (cmd[i] == "push_back") {
            d.push_back();
        }
        if (cmd[i] == "pop_front") {
            cout << d.front() << endl;
            d.pop_front();
        }
        if (cmd[i] == "pop_back") {
            cout << d.back() << endl;
            d.pop_back();
        }
        if (cmd[i] == "size") {
            cout << d.size() <<endl;
        }
        if (cmd[i] == "front") {
            cout << d.front() << endl;;
        }
        if (cmd[i] == "back") {
            cout << d.back() << endl; 
        }
        if (cmd[i] == "empty") {
            if(d.empty()) cout << "1" << endl;
            else cout << "0" << endl; 
        }
    }

    // Please write your code here.

    return 0;
}
