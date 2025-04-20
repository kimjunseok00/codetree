#include <iostream>
#include <string>
#include <list>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;
    list<int> a;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_front" || command[i] == "push_back") {
            cin >> A[i];
        }
    }
    for(int i = 0 ; i < N ; i++){

        if(command[i]=="push_front"){
            a.push_front(A[i]) ;
        }
        if(command[i]=="push_back"){
            a.push_back(A[i]) ;
        }
        if(command[i]=="pop_front"){
            if(!a.empty()){
            cout << a.front() << endl;
            a.pop_front() ;
            }
        }
        if(command[i]=="pop_back"){
            if(!a.empty()){
                cout << a.back() << endl;
                a.pop_back();
            }
        }
        if(command[i]=="size"){
            cout << a.size() << endl ;
        }
        if(command[i]=="empty"){
            if(a.empty()) cout << "1" << endl ;
            else cout << "0" <<endl ;
        }
        if(command[i]=="front"){
            cout << a.front() << endl ;
        }
        if(command[i]=="back"){
            cout << a.back() << endl ;
        }
    }
    

    return 0;
}
