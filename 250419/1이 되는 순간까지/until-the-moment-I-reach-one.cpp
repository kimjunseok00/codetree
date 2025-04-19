#include <iostream>

using namespace std;

int N;

int f(int a){
    if(a<=1) return 0;
    
    if(a%2==0)
    return f(a/2) + 1 ;
    else
    return f(a/3) + 1;

}
int main() {
    cin >> N;

    cout << f(N);

    return 0;
}