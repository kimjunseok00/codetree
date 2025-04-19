#include <iostream>

using namespace std;

int N;

void cen (int a){
    if(a==0) return ;
    
    cen(a-1);
    cout << a << " " ;
}
void num (int a){
    if(a==0) return ;
    cout << a << " " ;
    num (a-1) ;
}
int main() {
    cin >> N;

    cen(N) ;
    cout << " " << endl ;
    num(N) ;
    return 0;
}