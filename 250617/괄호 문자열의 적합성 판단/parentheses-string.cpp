#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;
    stack<int> s;
    
    for(int i=0 ; i<str.size();i++){
        if(str[i]=='(')
            s.push(str[i]);
        else{
            if(!(s.empty())){
                s.pop();
            }
            else{
                cout << " No" ;
                return 0;
            }
        }   
    }
    if(s.empty()) cout << "Yes" ;
    else cout << "No" ;
    return 0;
}
