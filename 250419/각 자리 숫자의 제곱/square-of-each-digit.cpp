#include <iostream>

using namespace std;

int N;

int f(int a){
    if(a==0) return a;
    return f(a/10) + (a%10)*(a%10);
}
int main() {
    cin >> N;
    cout << f(N);
    return 0;
}