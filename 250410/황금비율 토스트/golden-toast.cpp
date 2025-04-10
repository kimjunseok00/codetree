#include <iostream>
#include <string>
#include <list>
using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;
    list<char> l;
    list<char>::iterator it;
    
    for(char c : s ){
        l.push_back(c);
    }
    
    it = l.end() ;
    
    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;  
        if (command == 'P'){ // 문자 추가
            char c;
            cin >> c;
            l.insert(it,c) ;    
        }
        else if(command=='L') {// 바로 앞 위치변경
            if(it!=l.begin())
                it--;
        }
        else if(command=='R'){ // 바로 뒤 위치변경
            if(it!=l.end())
                it++;
        }
        else if(command=='D'){ // 바로 뒤 제거 
            if(it!=l.end())
                it = l.erase(it);
        }
    }

    for(it = l.begin(); it != l.end(); it++) { // 'a' 'b' 'c'
        cout << *it ;                   // it가 가리키는 주소에 담긴 데이터 참조를 위해 * 사용
    }  // Please write your code here.

    return 0;
}
