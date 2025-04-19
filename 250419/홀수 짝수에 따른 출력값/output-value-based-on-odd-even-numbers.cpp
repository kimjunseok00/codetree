#include <iostream>

using namespace std;

int N;
int fa(int a){
    if(a<=1) return a;
    
    if(a%2==0) return a + fa(a-2);
    if(a%2==1) return a + fa(a-2);
} 

int main() {
    cin >> N;
    cout << fa(N);
    return 0;
}