#include <iostream>
#include <stack>
using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;
    
    stack<int> s;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }
    for (int i = 0; i < N; i++) {
        if (command[i] == "push") {
            s.push(value[i]) ;
        }
        if (command[i] == "pop") {
            cout << s.top() << endl;
            s.pop() ;
        }
        if (command[i] == "size") {
            cout << s.size() << endl ;
        }
        if (command[i] == "top") {
            cout << s.top() << endl;
        }
        if (command[i] == "empty") {
            if(!(s.empty())) cout << "0" << endl;
            else cout << "1" << endl;
        }
    }

    return 0;
}
