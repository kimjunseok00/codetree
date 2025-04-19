#include <iostream>

using namespace std;

int N;

void cen(int a){
    if(a==0) return ;
    cout << "HelloWorld" << endl ; 
    cen(a-1) ;
}
int main() {
    cin >> N;

    cen(N);
    return 0;
}