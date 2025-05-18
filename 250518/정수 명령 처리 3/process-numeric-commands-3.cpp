#include <iostream>
#include <string>
#include <deque>
using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "push_front") {
            cin >> num[i];
        }
    }
    
    deque<int> s;
    
    for(int i =0 ; i<N ; i++){
        
        if(command[i]=="push_front" ){
            s.push_front(num[i]) ;
        }

        if(command[i]=="pop_front"){
            cout << s.front() << endl;
            s.pop_front() ;
        }

        if(command[i]=="size"){
            cout << s.size() << endl ;
        }

        if(command[i]=="empty"){
            if(!s.empty()){
                cout << "0" << endl ;
            }
            else{
                cout << "1" << endl ;
            }
        }
        if(command[i]=="front"){
            cout << s.front() << endl ;
        }
        if(command[i]=="back"){
            cout << s.back() << endl; 
        }
        if(command[i]=="pop_back") { 
            cout << s.back() << endl; 
            s.pop_back();
        }
        if(command[i]=="push_back") {
            s.push_back(num[i]);
        }
    }
        
    return 0;
}