#include <iostream>

using namespace std;

int N;

void num(int a){
    for(int i = a ; i>=1 ; i--){
        cout << i << " " ;
    }
    for(int i = 1 ; i<=a ; i++){
        cout << i << " " ;
    }
}
int main() {
    cin >> N;
    num(N) ;
    return 0;
}