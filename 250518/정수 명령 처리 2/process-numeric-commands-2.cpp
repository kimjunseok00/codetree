#include <iostream>
#include <string>
#include <queue>
using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A[i];
        }
    }
    
    queue<int> s;
    
    for(int i =0 ; i<N ; i++){
        
        if(command[i]=="push"){
            s.push(A[i]) ;
        }

        if(command[i]=="pop"){
            cout << s.front() << endl;
            s.pop() ;
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
    }
    // Please write your code here.

    return 0;
}
