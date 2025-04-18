#include <iostream>

using namespace std;

int N;

int fit(int a){
    if(a<=1) return a;
    return fit(a-1) + fit(a-2);
}
int main() {
    cin >> N;

    cout << fit(N) ;
    return 0;
}