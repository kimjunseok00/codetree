#include <iostream>

using namespace std;

int N;

int f(int a){
    if(a==1) return a;
    return a + f(a-1);
}
int main() {
    cin >> N;
    cout << f(N) ;
    return 0;
}