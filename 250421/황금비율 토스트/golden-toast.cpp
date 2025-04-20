#include <iostream>
#include <string>
#include <list> 
using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;
    list <char> l;
    for (int i = 0 ; i < n ; i++){
        l.push_back(s[i]) ;
    }

    list<char>:: iterator it;
    it = l.end() ;
    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if (command == 'P') {
            char c;
            cin >> c;
            l.insert(it,c);
            }
            else
            l.insert(it,c);
        }
        if(command == 'L') {
            if(it!=l.begin())
            it --;
        }
        if(command == 'R') {
            if(it!=l.end())
            it ++;
        }
        if(command == 'D') {
            if(it!=l.end())
            it = l.erase(it);
        }
    }

    for(it=l.begin() ; it!=l.end();it++)
        cout << *it ;
    return 0;
}
