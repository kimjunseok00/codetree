#include <iostream>
#include <vector>
using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;
    vector <int> v;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
    }
    for(int i = 0 ; i<N ; i++){
        if(command[i]=="push_back"){
            v.push_back(num[i]);
        }
        if(command[i]=="get"){
            cout << v[num[i]-1] << endl;
        }
        if(command[i]=="pop_back"){
            if(!v.empty())
            v.pop_back();
        }
        if(command[i]=="size"){
            cout << v.size() << endl;
        }
        
    }
    // Please write your code here.

    return 0;
}
